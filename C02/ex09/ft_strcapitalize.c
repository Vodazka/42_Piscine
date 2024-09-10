char *ft_strcapitalize(char *str)
{
	int i = 0;
	int word = 1;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(word)
			{
				str[i] = str[i] - ('a' - 'A');
				word = 0;
			}
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			if(!word)
				str[i] = str[i] + ('a' - 'A');
		}
		else if(str[i] >= '0' && str[i] <= '9')
			word = 0;
		else
			word = 1;
		i++;
	}
	return str;
}
