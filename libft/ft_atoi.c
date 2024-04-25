/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:22:27 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/21 14:30:05 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	result;
	int	sign;

	while (ft_isspace(*s))
		s++;
	sign = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	result = 0;
	while (ft_isdigit(*s))
	{
		result = (result * 10) + (*s - 48);
		s++;
	}
	result *= sign;
	return (result);
}
