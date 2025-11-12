/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:51:56 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 12:02:15 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putadress(void *ptr)
{
    unsigned long long adress = (unsigned long long)ptr;
    if (adress == 0)
        ft_putchar("0x0");
    else
        ft_putchar("0x");
        ft_puthexa(adress, 7);
}