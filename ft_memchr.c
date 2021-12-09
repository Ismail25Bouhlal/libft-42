/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:15:02 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/12/03 07:41:37 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		t;
	size_t		i;

	t = (char)c;
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == t)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
