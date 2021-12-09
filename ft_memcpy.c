/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:33:20 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/12/03 07:42:20 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	str = dst;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		str[i] = ((char *) src)[i];
		i++;
	}
	return ((void *)str);
}
