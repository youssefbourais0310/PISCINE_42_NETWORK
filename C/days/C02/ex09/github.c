char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		handler;

	i = 0;
	handler = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (handler == 1)
				str[i] = str[i] - 32;
			    handler = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			handler = 0;
		else
			handler = 1;
		i++;
	}
	return (str);
}