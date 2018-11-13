/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:59:48 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 11:42:50 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t		i;
	char		*s_1;
	char		*s_2;

	s_1 = s1;
	s_2 = s2;
	i = 0;
	while (s_1[i] == s_2[i] && i < n - 1)
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s_1[i] - (unsigned char)s_2[i]);
}
