/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:12:32 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/22 13:22:17 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  s_len;
    char    *ptr;

    if (!s || ft_strlen(s) == 0)
        return ft_calloc(1, sizeof (char));
    s_len = ft_strlen(s);
    ptr = (char *) malloc((s_len + 1) * sizeof (char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s, s_len + 1);
    return (ptr);
}