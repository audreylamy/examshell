#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + 48);
}

int ft_inside(char *tmp, char c, int k)
{
	int i;

	i = 0;
	while (i < k)
	{
		if (tmp[i] == c)
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *str1;
	char *str2;

	i = 0;
	j = 0;
	str1 = argv[1];
	str2 = argv[2];
	if (argc == 3)
	{
		while (str1[i] != '\0')
		{
			if (ft_inside(str1, str1[i], i) == 1)
			{
				ft_putchar(str1[i]);
			}
			i++;
		}
		while (str2[j] != '\0')
		{
			if ((ft_inside(str1, str2[j], ft_strlen(str1)) == 1) && (ft_inside(str2, str2[j], j) == 1))
			{	
				ft_putchar(str2[j]);
			}		
			j++;
		}
	ft_putchar('\n');		
	}
	else
	{	
		ft_putchar('\n');
	}
	return(0);
}

