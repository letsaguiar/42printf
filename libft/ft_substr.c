/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:24:01 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/22 13:29:53 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, size_t start, size_t len)
{
    size_t  s_len;
    char    *ptr;

    if (!s || ft_strlen(s) == 0 || start >= ft_strlen(s))
        return (ft_strdup(""));
    s_len = ft_strlen(s);
    if (start + len > s_len)
        len = s_len - start;
    ptr = malloc((len + 1) * sizeof (char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s + start, len + 1);
    return (ptr);
}