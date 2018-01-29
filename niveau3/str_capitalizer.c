#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    str_capitalizer(char *str)
{
    int        i;
    
    i = 0;
    if (str[i] >= 'a' && 'z' >= str[i])
     	str[i] -= 32;
    ft_putchar(str[i]);
    while (str[++i])
    {
        if (str[i] >= 'A' && 'Z' >= str[i])
            str[i] += 32;
        if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || \
                                                 str[i] == '\t'))
            str[i] -= 32;
        ft_putchar(str[i]);
    }
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		while(i < argc)
		{
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return(0);
}
