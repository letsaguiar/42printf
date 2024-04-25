/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:41:35 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 11:47:13 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t len)
{
	while (len > 0)
	{
		if (((char *) s)[len - 1] == (unsigned char) c)
			return ((void *) s + len - 1);
		len--;
	}
	return (NULL);
}
