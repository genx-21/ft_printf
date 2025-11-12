/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:10:33 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 22:15:40 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *formata, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int ft_putadress(void *ptr);
int	ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);
int	ft_puthexa(unsigned int nb, int x);
int ft_puthexa_long(unsigned long long nb);

#endif
