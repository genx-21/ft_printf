/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:13:08 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 19:57:48 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr_unsigned(unsigned int n)
{
    char	arr[10];
	int		i;
	int count;

	count = 0;
    if (n == 0)
    {
        ft_putchar('0');
        return (1);
    }
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
		count += ft_putchar(arr[i]);
	}
	return (count);
}
