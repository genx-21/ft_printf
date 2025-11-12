/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:57:07 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 20:35:58 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(unsigned int nb, int x)
{
	int arr[16];
	int i;
	int count;

	count = 0;
	i = 0;
	if (nb == 0)
		count += ft_putchar('0');
	char base[16] = "0123456789abcdef";
	char base1[16] = "0123456789ABCDEF";
	while (nb > 0)
	{
		if (x == 6)
			arr[i] = base[nb % 16];
		else if (x == 7)
			arr[i] = base1[nb % 16];
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
