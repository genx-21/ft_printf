/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:03:16 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 12:17:17 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void print_data(int n, const char *format, va_list *star)
{
	if (n == 0)
		ft_putchar(va_arg(*star, char));
	if (n == 1)
		ft_putstr(va_arg(*star, char *));
	if (n == 2)
		ft_putadress(va_arg(*star, void *));
	if (n == 3 || n == 4)
		ft_putnbr(va_arg(*star, int));
	if (n == 5)
		ft_putnbr_unsigned(va_arg(*star, unsigned int));
	if (n == 6)
		ft_puthexa(va_arg(*star, unsigned int), 7);
	if (n == 7)
		ft_puthexa(va_arg(*star, unsigned int), 8);
	if (n == 8)
		ft_putchar('%');
}

int check_form(const char *format)
{
	int i;

	i = 0;
	if (format[i + 1] == 'c')
		return (0);
	if (format[i + 1] == 's')
		return (1);
	if (format[i + 1] == 'p')
		return (2);
	if (format[i + 1] == 'd')
		return (3);
	if (format[i + 1] == 'i')
		return (4);
	if (format[i + 1] == 'u')
		return (5);
	if (format[i + 1] == 'x')
		return (6);
	if (format[i + 1] == 'X')
		return (7);
	if (format[i + 1] == '%')
		return (8);
	else
		return (-1);
}

int ft_printf(const char *format, ...)
{
	int i;
	int n;
	
	i = 0;
	va_list	star;
	va_start (star, format);
	while (i < format)
	{
		if (format[i] == '%')
		{
			n = check_form(format[i]);
			if (n == -1)
				return (-1);
			print_data(n, format, &star);
		}
	}
	va_end (star);
	return (i);
}
