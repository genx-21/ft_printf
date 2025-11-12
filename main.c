/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:18:17 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/12 22:19:27 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
    int count;

    printf("=== ft_printf helper test ===\n\n");

    // 1️⃣ ft_putchar
    count = ft_putchar('A');
    printf("\nft_putchar('A') returned: %d (should be 1)\n\n", count);

    // 2️⃣ ft_putstr
    count = ft_putstr("Salah");
    printf("\nft_putstr(\"Salah\") returned: %d (should be 5)\n\n", count);

    // 3️⃣ ft_putnbr (negative)
    count = ft_putnbr(-42);
    printf("\nft_putnbr(-42) returned: %d (should be 3: '-' + '4' + '2')\n\n", count);

    // 4️⃣ ft_putnbr (positive)
    count = ft_putnbr(12345);
    printf("\nft_putnbr(12345) returned: %d (should be 5)\n\n", count);

    // 5️⃣ ft_putnbr_unsigned
    count = ft_putnbr_unsigned(4294967295U);
    printf("\nft_putnbr_unsigned(4294967295U) returned: %d (should be 10)\n\n", count);

    // 6️⃣ ft_puthexa (lowercase)
    count = ft_puthexa(255, 6);
    printf("\nft_puthexa(255, 6) returned: %d (should be 2: 'f' + 'f')\n\n", count);

    // 7️⃣ ft_puthexa (uppercase)
    count = ft_puthexa(255, 7);
    printf("\nft_puthexa(255, 7) returned: %d (should be 2: 'F' + 'F')\n\n", count);

    // 8️⃣ ft_putadress
    int x = 0;
    count = ft_putadress(&x);
    printf("\nft_putadress(&x) returned: %d (should be 14–18 depending on your system)\n\n", count);

    return 0;
}

