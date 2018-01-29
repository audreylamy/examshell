#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char *str;
	int i;
	int j;

	i = 0;
	str = argv[1];
	if (argc != 2)
		ft_putchar('\n');
	else
	{
        while (str[i] != '\0')
        {
            if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
                j = i + 1;
            i++;
        }
        while (str[j] >= 33 && str[j] <= 127)
        {
            write(1, &str[j], 1);
            j++;
        }
		ft_putchar('\n');
	}
	return(0);
}

