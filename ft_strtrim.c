/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:52:06 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/11/22 18:02:29 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != '\0' && set != '\0')
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] != '\0' && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) *(j - i) + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[i], (j - i) + 1);
	}
	return (str);
}
