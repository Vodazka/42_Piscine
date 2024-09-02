void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int temp;

	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
