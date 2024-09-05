int ft_str_is_numeric(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= '1' && str[i] <= '9')
			i++;
		else
			return 0;
	}
	return 1;
}
