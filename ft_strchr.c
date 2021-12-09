/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:00:00 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/11/15 21:19:01 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)ch)
			return (s + i);
		i++;
	}
	if (ch == '\0')
		return (s + i);
	return (NULL);
}
