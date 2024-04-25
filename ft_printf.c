/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:49:02 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 18:30:36 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static int  ft_parse(char type, va_list args)
{
    if (type == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (type == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (type == 'p')
        return (ft_putaddr(va_arg(args, void *)));
    else if (type == 'i' || type == 'd')
        return (ft_putnbr(va_arg(args, int))); 
    else if (type == 'u')
        return (ft_putunbr(va_arg(args, unsigned int)));
    else if (type == 'x')
        return (ft_puthex_lower(va_arg(args, unsigned int)));
    else if (type == 'X')
        return (ft_puthex_upper(va_arg(args, unsigned int)));
    else if (type == '%')
        return (ft_putchar('%'));
    return (0);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    size_t  i;
    size_t  len;

    va_start(args, s);
    i = 0;
    len = 0;
    while (s[i])
    {
        if (s[i] == '%')
            len += ft_parse(s[++i], args);
        else
            len += ft_putchar(s[i]);
        i += 1;
    }
    va_end(args);
    return (len);
}