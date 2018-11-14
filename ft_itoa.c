#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int static	malloc_size(int nb)
{
	int	n;
	int	res;

	n = nb;
	res = 0;
	if (n == 0)
		return (2);
	if (n < 0)
	{
		n = -n;
		res++;
	}
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res + 1);
}

char static	*strrev(char *str)
{
	int	n;
	int	i;
	char	tmp;

	n = 0;
	i = strlen(str) - 1;
	while (n < i)
	{
		tmp = str[n];
		str[n] = str[i];
		str[i] = tmp;
		n++;
		i--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	int	n;
	char	*str;

	n = 0;
	if (!(str = (char*)malloc(sizeof(char) * malloc_size(nb))))
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		str[malloc_size(nb) - 1] = '-';
	}
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nb > 0)
	{
		str[n] = (nb % 10) + 48;
		nb = nb / 10;
		n++;
	}
	str = strrev(str);
	return (str);
}
