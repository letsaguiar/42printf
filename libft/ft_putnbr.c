/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:33:27 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 18:21:01 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"
#include "libft.h"

size_t ft_putnbr(int n)
{
    size_t  len;
    
    ft_putnbr_fd(n, 1);
    if (n == 0)
        return (1);
    if (n == INT_MIN)
        return (11);
    if (n == 0)
        return (1);
    len = 0;
    if (n < 0)
    {
        len++;
        n *= -1;
    }
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}