/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:26:54 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/11 13:31:39 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	negativ(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return (-1);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	char	arr[10];
	int		i;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n <= 0)
		n = negativ(n);
	if (n == -1)
		return ;
	i = 0;
	while (n > 0)
	{
		arr[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(arr[i]);
	}
}
