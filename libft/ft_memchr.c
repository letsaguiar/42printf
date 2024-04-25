/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:34:11 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 11:36:50 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((char *) s)[i] == (unsigned char) c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
