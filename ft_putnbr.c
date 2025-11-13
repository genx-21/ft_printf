/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:26:54 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 20:25:08 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static long int	negativ(long int n, int *count)
{
	if (n == 0)
	{
		ft_putchar('0');
		return (-1);
	}
	if (n < 0)
	{
		ft_putchar('-');
		*count = 1;
		n *= -1;
	}
	return (n);
}

int	ft_putnbr(int n)
{
	char		arr[10];
	int			i;
	long int	nb;
	int			count;

	nb = n;
	count = 0;
	if (nb <= 0)
		nb = negativ(nb, &count);
	if (nb == -1)
		return (1);
	i = 0;
	while (nb > 0)
	{
		arr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		count += ft_putchar(arr[i]);
	}
	return (count);
}
