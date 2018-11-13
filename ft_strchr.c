/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:33:43 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 12:42:31 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		n;

	n = 0;
	if ((char)c == '\0')
	{
		while (s[n] != '\0')
			n++;
		return (s + n);
	}
	while (s[n])
	{
		if (s[n] == (char)c)
			return (s + n);
		n++;
	}
	return (NULL);
}
