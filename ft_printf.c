/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:49:02 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 16:32:02 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

void    ft_putchar(char c);
void    ft_putstr(const char *s);

static void ft_parse(char type, va_list args)
{
    if (type == 'c')
        ft_putchar(va_arg(args, int));
    else if (type == 's')
        ft_putstr(va_arg(args, char *));
}

int ft_printf(const char *s, ...)
{
    va_list args;
    va_start(args, s);
    ft_parse(s[1], args);
    va_end(args);
    return (0);
}

int main(void)
{
    ft_printf("%s", "Letícia");
}