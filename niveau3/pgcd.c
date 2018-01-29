#include <stdio.h>

int ft_pgcd(int nb1, int nb2)
{
    int pgcd;
    int i;
    int max;

    max = nb1;
    if (nb1 < nb2)
        max = nb2;
    i = 1;
    pgcd = 1;
    while(i <=  max)
    {
        if ((nb1 % i == 0) &&  (nb2 % i == 0))
        {
            pgcd = i;
        }
        i++;
    }
    return(pgcd);
}

int main( int argc, char **argv)
{
	int nb1;
	int nb2;
	int pgcd;

	if (argc != 3)
		printf("%c", '\n');
	else
	{
		nb1 = ft_atoi(argv[1]);
		nb2 = ft_atoi(argv[2]);
		pgcd = ft_pgcd(nb1, nb2);
		printf("%d\n", pgcd);
	}
	return(0);
}

