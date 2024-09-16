char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while(dest[len])
		len++;
	
	while(src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	
	return dest;
}
