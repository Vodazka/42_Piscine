char *ft_strncat(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int len = 0;

	while(dest[len])
		len++;
	
	while(src[i] && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return dest;
}
