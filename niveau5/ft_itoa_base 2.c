#include <stdlib.h>

int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    else
        return (nbr);
}

static void        aux(int n, int b, char *ans, int *p)
{
    char const    base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    if (n <= -b || b <= n)
        aux(n / b, b, ans, p);
    ans[(*p)++] = base[ft_abs(n % b)];
}

char            *ft_itoa_base(int value, int base)
{
    char    *ans;
    int        p;
    
    if (base < 2 || 36 < base
        || !(ans = (char *)malloc(sizeof(char) * (sizeof(int) * 8 + 1))))
        return (NULL);
    p = 0;
    if (value < 0)
        ans[p++] = '-';
    aux(value, base, ans, &p);
    ans[p] = '\0';
    return (ans);
}

int        main(int argc, char **argv)
{
    printf("%s", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
    return(0);
}

#include <stdlib.h>

int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    else
        return (nbr);
}

static void aux(int value, int base, char *str, int *i)
{
    char const base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    if (value <= -base || base <= value)
        aux(value / base, base, str, i);
    str[(*i)++] = base[ft_abs(value % base)];
}

char *ft_itoa_base(int value, int base)
{
    char *str;
    int i;
    
    if (base < 2 || base > 36 || !(str = (char*)malloc(sizeof(char) * (sizeof(int) * 8 + 1))))
        return (NULL);
    i = 0;
    if (value < 0)
    {
        str[i] = '-';
        i++;
    }
    aux(value, base, str, &i);
    str[i] = '\0';
    return(str);
}


-----------------------



#include <stdlib.h>
#include <stdio.h>

int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    else
        return (nbr);
}

static void        aux(int n, int b, char *ans, int *p)
{
    char const    base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    if (n <= -b || b <= n)
        aux(n / b, b, ans, p);
    ans[(*p)++] = base[ft_abs(n % b)];
}

char            *ft_itoa_base(int value, int base)
{
    char    *ans;
    int        p;
    
    if (base < 2 || 36 < base
        || !(ans = (char *)malloc(sizeof(char) * (sizeof(int) * 8 + 1))))
        return (NULL);
    p = 0;
    if (value < 0)
        ans[p++] = '-';
    aux(value, base, ans, &p);
    ans[p] = '\0';
    return (ans);
}

int        main(int argc, char **argv)
{
    if (argc == 3)
        printf("%s", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
    else
        printf("%s", "hello");
    return(0);
}

