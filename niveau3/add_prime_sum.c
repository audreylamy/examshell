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

int ft_atoi(char *str)
{
    int i;
    int res;
    int neg;
    
    res = 0;
    neg = 0;
    i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r')
        i++;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    else
        neg = 1;
    while(str[i] >= '0' && str[i] <= '9' && str[i])
    {
        res = (res * 10) + (str[i] - 48);
        i++;
    }
    return(res * neg);
}

int ft_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return(0);
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	int nb;
	int sum;
	
	sum = 0;
	if (argc != 2)
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
	else
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (ft_prime(nb) == 1)
			{
				sum = sum + nb;
			}
			nb--;
		}
		ft_putnbr(sum);
		ft_putchar('\n');
	}
	return(0);
}


