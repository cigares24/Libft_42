/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:32:18 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 13:51:23 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int n;
	int res;
	int sign;

	sign = 1;
	res = 0;
	n = 0;
	while (str[n] == '\t' || str[n] == '\v' || str[n] == '\r' || 
			str[n] == '\n'|| str[n] == '\f' || str[n] == ' ')
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign = -1;
		n++;
	}
	while (str[n])
	{
		if (48 <= str[n] && str[n] <= 57)
			res = res * 10 + (str[n] - 48);
		else
			return (res * sign);
		n++;
	}
	return (res * sign);
}
