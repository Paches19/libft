/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpachec <adpachec@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:45:56 by adpachec          #+#    #+#             */
/*   Updated: 2022/09/30 13:15:35 by adpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = (-1);
		++i;
	}
	result = 0;
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i++] - '0') * sign;
		if (result > INT_MAX)
			return (-1);
		else if (result < INT_MIN)
			return (0);
	}
	return (result);
}
