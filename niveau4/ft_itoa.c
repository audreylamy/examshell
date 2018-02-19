#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_negative(nbr)
{
	if (nbr < 0)
		return(-1);
	else 
		return(0);
}

int ft_abs(nbr)
{
	if (nbr < 0)
		return(-nbr);
	return(nbr);
}

static int    ft_len(int nbr)
{
    int        len;
    
    len = (nbr <= 0) ? 1 : 0;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    return (len);
}

char        *ft_itoa(int n)
{
    int            len;
    int            negatif;
    char        *string;
    
    negatif = ft_negative(n);
    len = ft_len(n);
    string = (char *)malloc(sizeof(char) * len + 1);
    if (!string)
        return (NULL);
    string[len] = '\0';
    len--;
    while (len >= 0)
    {
        string[len] = '0' + ft_abs(n % 10);
        n = ft_abs(n / 10);
        len--;
    }
    if (negatif == -1)
        string[0] = '-';
    return (string);
}


int main(void)
{
	char *str;

	str = ft_itoa(1256);
	ft_putstr(str);
	return(0);
}
