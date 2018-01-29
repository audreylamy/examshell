#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;
    
    j = 0;
    while (s1[j] != '\0')
    {
        i = 0;
        while (s2[i] != '\0')
        {
            if (s1[j] == s2[i])
                return((char*)&s1[j]);
            i++;
        }
        j++;
    }
    return(0);
}

int main(void)
{
    ft_putstr(ft_strpbrk(";fjhbsdnc xwpusgrhbs", "opsiyhgvdzbnciox"));
    ft_putchar('\n');
    ft_putstr(strpbrk(";fjhbsdnc xwpusgrhbs", "opsiyhgvdzbnciox"));
    return(0);
}
