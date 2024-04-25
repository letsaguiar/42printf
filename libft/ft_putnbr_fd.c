/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:26:25 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 18:14:39 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == INT_MIN)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n *= -1;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + 48, fd);
}
