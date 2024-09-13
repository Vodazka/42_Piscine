#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_hex(unsigned int n)
{
	char hex[] = "0123456789abcdef";

	if(n >= 16)
		ft_putnbr_hex(n / 16);
	ft_putchar(hex[n % 16]);
}

void print_address(void *addr)
{
	unsigned long address = (unsigned long)addr;
	int shift = (sizeof(addr) * 2 - 1) * 4;

	while(shift >= 0)
	{
		ft_putnbr_hex((address >> shift) & 0xF);
		shift -= 4;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void ft_print_hex_content(const unsigned char *start, unsigned int size)
{
	int i = 0;

	while(i < 16)
	{
		if(i < size)
		{
			ft_putnbr_hex(start[i] / 16);
			ft_putnbr_hex(start[i] % 16);
		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if(i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void print_printable(const unsigned char *start, unsigned int size)
{
	int i = 0;

	while(i < 16)
	{
		if(i < size)
		{
			if(start[i] >= 32 && start[i] <= 126)
				ft_putchar(start[i]);
			else
			ft_putchar('.');
		}
		i++;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i = 0;
	unsigned char *ptr = (unsigned char *)addr;

	while(i < size)
	{
		print_address(ptr + i);
		ft_print_hex_content(ptr + i, size - i >= 16 ? 16 : size -i);
		print_printable(ptr + i, size - i >= 16 ? 16 : size - i);
		ft_putchar('\n');
		i += 16;
	}
	return addr;
}

int main(void)
{
	char str[] = "Hello, this is a test\nwith some non-printable chars: \x7f\x01";
	ft_print_memory(str, sizeof(str) - 1);
	return 0;
}
