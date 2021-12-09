/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:44:18 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/12/02 05:20:07 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (i < len && needle[j] && haystack[i])
	{
		if (needle[j] == haystack[i])
			j++;
		else if (needle[j] != haystack[i] && j != 0)
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	if (needle[j] != '\0')
		return (NULL);
	else
		return ((char *)(&haystack[i - j]));
}
