/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:10:33 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 13:01:32 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
void	ft_putnbr(int n);
void putnbr_unsigned(unsigned int n);
void	ft_puthexa(unsigned int nb, int x);

#endif
