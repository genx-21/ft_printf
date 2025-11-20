/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:51:56 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/19 22:12:38 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putadress(void *ptr)
{
	int				count;
	unsigned long	adress;

	count = 0;
	adress = (unsigned long)ptr;
	if (adress == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthexa_long(adress);
	return (count);
}
