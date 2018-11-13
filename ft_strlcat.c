/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:01:59 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 12:37:04 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *src, size_t size)
{
	int				index;
	unsigned int	length_dest;
	unsigned int	length_src;

	index = 0;
	length_dest = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (size == 0)
		return (0);
	if (size - 1 < length_dest)
		return (length_src + size);
	while (length_dest + index < size - 1)
	{
		dst[length_dest + index] = src[index];
		index++;
	}
	dst[length_dest + index] = '\0';
	return (length_dest + length_src);
}
