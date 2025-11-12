/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_for_adrs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:36:58 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 22:15:03 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthexa_long(unsigned long long nb)
{
	int arr[16];
	int i;
	int count;

	count = 0;
	i = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	char base[16] = "0123456789abcdef";
	while (nb > 0)
	{
		arr[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		count += ft_putchar(arr[i]);
	}
	return (count);
}
