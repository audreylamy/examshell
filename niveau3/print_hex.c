#include <unistd.h>

int        ft_atoi(char *s)
{
    long    r;
    int        sign;
    
    while (*s == 32 || (*s >= 9 && *s <= 13))
        s++;
    sign = (*s == '-') ? -1 : 1;
    (*s == '-' || *s == '+') ? s++ : s;
    r = 0;
    while (*s >= '0' && *s <= '9')
        r = r * 10 + *s++ - '0';
    return ((int)r * sign);
}

void    print_hex(int n)
{
    if (n >= 16)
        print_hex(n / 16);
    n = n % 16;
    n += n < 10 ? '0' : 'a' - 10;
    write(1, &n, 1);
}

int        main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (1);
}


//#include <unistd.h>
//
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
        ft_putchar('\n');
        i++;
    }
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
        ft_putchar(nb + '0');
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
//
//void print_hex(int i)
//{
//    char *str;
//
//    str = "0123456789abcdef";
//    if (i == 0)
//        ft_putchar('\n');
//    while(i)
//    {
//        ft_putchar(str[i % 16]);
//        i  = i / 16;
//    }
//}
//
//int main(int argc, char **argv)
//{
//    if (argc != 2)
//        ft_putchar('\n');
//    else
//    {
//        print_hex(ft_atoi(argv[1]));
//        ft_putchar('\n');
//    }
//    return(0);
//}



	




