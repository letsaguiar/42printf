/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:14:16 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 14:17:47 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;
    size_t  len;

    if (!s || ft_strlen(s) == 0)
        return;
    len = ft_strlen(s);
    i = 0;
    while (i < len)
    {
        f(i, s + i);
        i++;
    }
}
