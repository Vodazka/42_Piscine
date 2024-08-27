#include <unistd.h>

void ft_print_comb2(void)
{
	char a = 0;
	char b;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			char a1 = '0' + (a / 10);
			char a2 = '0' + (a % 10);
			write(1, &a1, 1);
			write(1, &a2, 1);

			write(1, " ", 1);

			char b1 = '0' + (b / 10);
			char b2 = '0' + (b % 10);
			write(1, &b1, 1);
			write(1, &b2, 1);

			if(!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
