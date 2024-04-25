/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:31:25 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/22 13:35:42 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *ptr;
    size_t  len;

    if (!s1 && !s2)
        return (ft_strdup(""));
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    ptr = (char *) malloc(len * sizeof (char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s1, len);
    ft_strlcat(ptr, s2, len);
    return (ptr);    
}