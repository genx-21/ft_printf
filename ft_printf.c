/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:03:16 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 12:57:20 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int print_data(int n, va_list *star)
{
	int nprint;

	nprint = 0;
	if (n == 0)
		nprint = ft_putchar(va_arg(*star, int));
	else if (n == 1)
		nprint = ft_putstr(va_arg(*star, char *));
	else if (n == 2)
		nprint = ft_putadress(va_arg(*star, void *));
	else if (n == 3 || n == 4)
		nprint = ft_putnbr(va_arg(*star, int));
	else if(n == 5)
		nprint = ft_putnbr_unsigned(va_arg(*star, unsigned int));
	else if (n == 6)
		nprint = ft_puthexa(va_arg(*star, unsigned int), 7);
	else if (n == 7)
		nprint = ft_puthexa(va_arg(*star, unsigned int), 8);
	else if (n == 8)
		nprint = ft_putchar('%');
	return (nprint);
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
	int count;
	
	count = 0;
	i = 0;
	va_list	star;
	va_start (star, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			n = check_form(&format[i]);
			if (n == -1)
				return (-1);
			count += print_data(n, &star);
			i +=2;
		}
		else
			count += ft_putchar(format[i++]);
	}
	va_end (star);
	return (count);
}
