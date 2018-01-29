#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_bits(unsigned char octet)
{
	int div;

	div = 128;

	while (div != 0)
	{
		if (div <= octet)
		{
			ft_putchar('1');
			octet = octet % div;
		}
		else
			ft_putchar('0');
		div = div / 2;
	}
}

unsigned char swap_bits(unsigned char octet)
{
	return((octet >> 4 & 0X0F) | (octet << 4 & 0XF0));
}

int main(void)
{
	ft_print_bits(swap_bits(2));
	return(0);
}
