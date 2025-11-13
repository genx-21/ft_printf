/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:51:56 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/13 21:42:51 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putadress(void *ptr)
{
	int				count;
	unsigned long	adress;

	count = 0;
	adress = (unsigned long)ptr;
	count += ft_putstr("0x");
	if (adress == 0)
		count += ft_putchar('0');
	else
		count += ft_puthexa_long(adress);
	return (count);
}
