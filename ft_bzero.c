void	ft_bzero(void *s, size_t n)
{
	int	i;
	char	*str;

	i = -1;
	str = (char*)s;
	while (s[++i] != '\0')
		s[i] = '\0';
}
