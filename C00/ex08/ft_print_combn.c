#include <unistd.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

void ft_put_comb(int digits[], int n) 
{
    int i = 0;
    while (i < n) 
	{
        ft_putchar(digits[i] + '0');
        i++;
    }
}

int ft_find_right(int digits[], int n) 
{
    int i = n - 1;
    while (i >= 0 && digits[i] == 9 - (n - 1) + i)
        i--;
    return i;
}

void ft_print_combn(int n)
{
    int digits[10];
    int i = 0;
    int j;

    while (i < n) 
	{
        digits[i] = i;
        i++;
    }

    while (1) 
	{
        ft_put_comb(digits, n);

        i = ft_find_right(digits, n);
        if (i < 0)
            break;

        digits[i]++;
        j = i + 1;
        while (j < n) 
		{
            digits[j] = digits[j - 1] + 1;
            j++;
        }

        write(1, ", ", 2);
    }
}
