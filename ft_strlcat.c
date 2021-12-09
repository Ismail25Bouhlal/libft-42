/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:49:54 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/11/10 18:08:17 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	i = ft_strlen(dst);
	j = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
	{
		return (len_src + size);
	}
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
