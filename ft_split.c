/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:40:43 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/12/03 21:25:10 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	int	lword;
	int	words;

	lword = 0;
	words = 0;
	while (s[lword])
	{
		if (s[lword] != c && (s[lword + 1] == c || s[lword + 1] == '\0'))
			words++;
		lword++;
	}
	return (words);
}

static	char	**free_word(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free (s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		lwrd;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	word = malloc ((ft_count_word(s, c) + 1) * sizeof (char *));
	if (!word)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		lwrd = 0;
		while (s[lwrd] != c && s[lwrd])
			lwrd++;
		if (*s != c && *s)
			word[j++] = ft_substr(s, 0, lwrd);
		if ((!word[j - 1]) && *s)
			return (free_word(word));
		s += lwrd;
	}
	word[j] = NULL;
	return (word);
}
