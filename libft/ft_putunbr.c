/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:37:54 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 18:21:19 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_putunbr(unsigned int n)
{
    size_t  len;

    if (n > 9)
        ft_putunbr(n / 10);
    ft_putchar_fd((n % 10) + 48, 1);
    if (n == 0)
        return (1);
    len = 0;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}