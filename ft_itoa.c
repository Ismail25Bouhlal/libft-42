/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlal <ibouhlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:52:33 by ibouhlal          #+#    #+#             */
/*   Updated: 2021/12/07 19:59:31 by ibouhlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = count(n);
	nb = n;
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str [0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}
