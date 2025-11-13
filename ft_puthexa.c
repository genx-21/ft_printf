/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:57:07 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/13 17:38:25 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	print_hex(int i, char *arr, int *count)
{
	while (i > 0)
	{
		i--;
		count += ft_putchar(arr[i]);
	}
}

int	ft_puthexa(unsigned int nb, int x)
{
	char	arr[16];
	int		i;
	int		count;
	char	*base_low;
	char	*base_upp;

	base_low = "0123456789abcdef";
	base_upp = "0123456789ABCDEF";
	count = 0;
	i = 0;
	if (nb == 0)
		count += ft_putchar('0');
	while (nb > 0)
	{
		if (x == 6)
			arr[i] = base_low[nb % 16];
		else if (x == 7)
			arr[i] = base_upp[nb % 16];
		nb = nb / 16;
		i++;
	}
	print_hex(i, arr, &count);
	return (count);
}
