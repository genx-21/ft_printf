/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:57:07 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 12:01:55 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexa(unsigned int nb, int x)
{
	int arr[2];
	int len;

	len = 2;
	char base[16] = "0123456789abcdef";
	char base1[16] = "0123456789ABCDEF";
	if (nb >= 16)
	{
		len--;
		if (x == 7)
			arr[len] = base1[nb % 16];
		if (x == 8)
			arr[len] = base[nb % 16];
		nb = nb / 16;
	}
	while (len < 2)
	{
		ft_putchar(arr[len]);
		len++;
	}
}
