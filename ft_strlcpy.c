/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:12:47 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/12/03 07:44:29 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (s == 0)
	{
		return (j);
	}
	else
	{
		while (src[i] != '\0' && i < s - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
		dst[i] = '\0';
	return (j);
}
