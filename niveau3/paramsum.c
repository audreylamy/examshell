#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int main(int argc, char **argv)
{
	char **str;
	int size;

	size = 0;
	str = argv;
	if (argc < 2)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return(0);
	}
	else
	{
		while (str[size])
		{
			size++;
		}	
		ft_putnbr(size - 1);
		ft_putchar('\n');
	}
	return(0);
}

