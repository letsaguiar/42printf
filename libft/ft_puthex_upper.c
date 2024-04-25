/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:43:41 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 21:30:08 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_puthex_upper(long unsigned int n)
{
    size_t  len;

    if (n >= 16)
        ft_puthex_upper(n / 16);
    if (n % 16 <= 9)
        ft_putchar_fd(n % 16 + 48, 1);
    else
        ft_putchar_fd(n % 16 + 55, 1);
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