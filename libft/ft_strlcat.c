/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:14:01 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 11:27:45 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (len < dst_len + 1)
		return (len + src_len);
	if (len - dst_len >= src_len + 1)
		ft_strcat(dst, src);
	else if (len - dst_len > 0)
	{
		ft_strncat(dst, src, len - dst_len - 1);
		dst[len - 1] = 0;
	}
	return (dst_len + src_len);
}
