/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:06:28 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 14:43:56 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		i;
	char	*str;

	n = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	n = -1;
	while (s1[++n] != '\0')
		str[n] = s1[n];
	i = -1;
	while (s2[++i] != '\0')
		str[n + i] = s2[i];
	str[n + i] = '\0';
	return (str);
}
