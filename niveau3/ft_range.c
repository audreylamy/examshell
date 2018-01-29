#include <unistd.h>
#include <stdlib.h>

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

int *ft_range(int start, int end)
{
	int *tab;
	int i;
	int len;

	i = 0;
	if (start == 0 && end == 0)
	{
		tab = (int*)malloc(sizeof(int*) * 1);
		tab[i] = 0;
		return(tab);
	}
	else if (start < end)
	{
		len = end - start;
		tab = (int*)malloc(sizeof(int*) * len + 1);
		while (start <= end)
		{
			tab[i] = start++;
			i++;
		}
		return(tab);
	}
	else if (start > end)
	{
		len = (start - end);
		tab = (int*)malloc(sizeof(int*) * len + 1);
		while (start >= end)
		{
			tab[i] = start--;
			i++;
		}
		return(tab);
	}
	return(0);
}

int main(void)
{
	int *tab;

	tab = ft_range(0, 0);
	ft_putnbr(tab[0]);
	return(0);
}

