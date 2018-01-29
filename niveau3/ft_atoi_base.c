#include <stdlib.h>

int nb_base(char c, int nb)
{
	if (nb < 10)
		return(c >= '0' && c <= '9');
	return((c >= '0' && c <= '9') || (c >= 'a' && c <= (('a' + nb) - 10)) || (c >= 'A' && c <= ('A' + nb) - 10))
}

int ft_atoi(char *str, int nb)
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
    while(str[i] >= '0' && nb_base(str[i], nb))
    {
		if (str[i] >= 'a' && str[i] <= 'f')
			res = (res * 10) + (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'F')
			res = (res * 10) + (str[i] - 'A' + 10);
		else
        	res = (res * 10) + (str[i] - 48);
        i++;
    }
    return(res * neg);
}
