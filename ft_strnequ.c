/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:39:32 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 14:36:01 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i <= n)
		i++;
	if (i == n)
		return (1);
	return (0);
}