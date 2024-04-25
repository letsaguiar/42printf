/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:08:45 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 14:11:58 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char    *ptr;
    size_t  i;
    size_t  len;

    if (!s || ft_strlen(s) == 0)
        return (ft_strdup(""));
    len = ft_strlen(s);
    ptr = (char *) ft_calloc(len + 1, sizeof (char));
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    return (ptr);
}
