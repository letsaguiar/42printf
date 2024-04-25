/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:07:41 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 14:15:10 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle || !ft_strlen(needle))
		return ((char *) haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
