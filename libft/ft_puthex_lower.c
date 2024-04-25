/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:51:31 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 21:30:11 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_puthex_lower(long unsigned int n)
{
    size_t  len;

    if (n >= 16)
        ft_puthex_lower(n / 16);
    if (n % 16 <= 9)
        ft_putchar_fd(n % 16 + 48, 1);
    else
        ft_putchar_fd(n % 16 + 87, 1);
    if (n == 0)
        return (1);
    len = 0;
    while (n != 0)
    {
        len++;
        n /= 16;
    }
    return (len);
}