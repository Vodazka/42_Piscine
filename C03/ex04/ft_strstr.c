char *ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j;

	if(!*to_find)
		return str;

	while(str[i])
	{
		j = 0;

		while(str[i + j] && str[i + j] == to_find[j])
		{
			j++;
			if(!to_find[j])
				return &str[i];
		}

		i++;
	}
	return (void *)0;
}
