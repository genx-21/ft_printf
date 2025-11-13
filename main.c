/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:18:17 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 22:35:23 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
    int ft_ret, std_ret;
    char c = 'A';
    char *str = "Salah";
    void *ptr = &c;
    int d = -2147483648;
    unsigned int u = 42;
    int x = 255;

    // Test all basic conversions
    ft_ret = ft_printf("ft_printf Test:\n");
    ft_ret += ft_printf("Char: %c\n", c);
    ft_ret += ft_printf("String: %s\n", str);
    ft_ret += ft_printf("Pointer: %p\n", ptr);
    ft_ret += ft_printf("Decimal: %d\n", d);
    ft_ret += ft_printf("Integer: %i\n", d);
    ft_ret += ft_printf("Unsigned: %u\n", u);
    ft_ret += ft_printf("Hex lowercase: %x\n", x);
    ft_ret += ft_printf("Hex uppercase: %X\n", x);
    ft_ret += ft_printf("Percent: %%\n");

    printf("\nft_printf returned total chars: %d\n\n", ft_ret);

    // Compare with standard printf
    std_ret = printf("printf Test:\n");
    std_ret += printf("Char: %c\n", c);
    std_ret += printf("String: %s\n", str);
    std_ret += printf("Pointer: %p\n", ptr);
    std_ret += printf("Decimal: %d\n", d);
    std_ret += printf("Integer: %i\n", d);
    std_ret += printf("Unsigned: %u\n", u);
    std_ret += printf("Hex lowercase: %x\n", x);
    std_ret += printf("Hex uppercase: %X\n", x);
    std_ret += printf("Percent: %%\n");

    printf("\nprintf returned total chars: %d\n", std_ret);

    return 0;
}
