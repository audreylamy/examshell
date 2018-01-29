#include <stdio.h>
#include <stdlib.h>

unsigned int ft_lcm(unsigned int nb1, unsigned int nb2)
{
    unsigned int pgcd;
    unsigned int i;
    unsigned int max;
	unsigned int res;

	res = 0;
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
	res = (nb1 * nb2) / pgcd;
    return(res);
}

int main( int argc, char **argv)
{
	unsigned int nb1;
	unsigned int nb2;
	unsigned int lcm;

	if (argc != 3)
		printf("%c", '\n');
	else
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		lcm = ft_lcm(nb1, nb2);
		printf("%d\n", lcm);
	}
	return(0);
}

