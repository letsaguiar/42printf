/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:27:26 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 14:06:01 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static unsigned int count_digits(int c)
{
    unsigned int    counter;

    counter = 0;
    if (c < 0)
        counter++;
    while (c != 0)
    {
        counter++;
        c /= 10;
    }
    return (counter);
}

char    *ft_itoa(int c)
{
    char            *ptr;
    unsigned int    len;

    len = count_digits(c);
    if (len == 0)
        return (ft_strdup("0"));
    if (c == INT_MIN)
        return (ft_strdup("-2147483648"));
    if (c < 0)
        c *= -1;
    ptr = (char *) ft_calloc(len + 1, sizeof (char));
    if (!ptr)
        return (NULL);
    while (c != 0)
    {
        ptr[len - 1] = (c % 10) + 48;
        c /= 10;
        len -= 1;
    }
    if (!ptr[0])
        ptr[0] = '-';
    return (ptr);
}