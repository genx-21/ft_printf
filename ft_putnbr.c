/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:26:54 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/13 22:09:22 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	char	arr[11];
	long	nb;
	int		i;
	int		count;

	nb = n;
	count = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		arr[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i--)
		count += ft_putchar(arr[i]);
	return (count);
}
