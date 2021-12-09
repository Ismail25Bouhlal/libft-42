/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:07:41 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/11/25 22:57:49 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*src;

	if (!s)
		return (NULL);
	if (len > ft_strlen(&s[start]))
		src = malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	else
		src = malloc (sizeof(char) * (len + 1));
	if (!src)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	i = 0;
	while (s[start + i] && i < len)
	{
		src[i] = s[start + i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
