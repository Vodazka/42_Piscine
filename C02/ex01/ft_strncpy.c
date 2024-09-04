char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int n_count = n;

	while(src[i] && n-- > 0)
	{
		dest[i] = src[i];
		i++;
	}

	while(i < n_count)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
