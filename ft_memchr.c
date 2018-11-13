/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:15:46 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 11:27:50 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = s;
	while (i < n)
	{
		if (cpy[i] == (char)c)
			return (cpy + i);
		i++;
	}
	return (NULL);
}
