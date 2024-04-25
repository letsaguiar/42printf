/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:23:04 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 11:07:57 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (len >= src_len + 1)
		ft_strcpy(dst, src);
	else if (len > 0)
	{
		ft_strncpy(dst, src, len - 1);
		dst[len - 1] = 0;
	}
	return (src_len);
}
