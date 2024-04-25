/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:22:34 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 18:36:14 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(const char *s, int fd)
{
    if (!s)
        write(fd, "(null)", 6);
    else
        write(fd, s, ft_strlen(s));
}
