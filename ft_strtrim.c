/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:16:40 by asicat            #+#    #+#             */
/*   Updated: 2018/11/13 18:13:43 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		n;
	int		i;
	char	*str;
	int		k;

	n = 0;
	k = 0;
	while (s[n] == '\t' || s[n] == '\n' || s[n] == ' ')
		n++;
	if (n == ft_strlen(s))
	{
		if(!(str = (char*)malloc(1)))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	i = ft_strlen(s) - 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i--;
	if (!(str = (char*)malloc(sizeof(char) * (i - n + 2))))
		return (NULL);
	while (n <= i)
	{
		str[k] = s[n];
		k++;
		n++;
	}
	str[k] = '\0';
	return (str);
}
