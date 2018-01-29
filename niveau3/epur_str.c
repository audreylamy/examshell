#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char**argv)
{
	char *str;
	int i;
	int flg;

	flg = 0;
	i = 0;
	str = argv[1];

	if (argc !=  2)
		ft_putchar('\n');
	else
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while(str[i] != '\0')
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				flg = 1;
			}
			if (str[i] != ' ' && str[i] != '\t')
			{
				if (flg == 1)
				{
					ft_putchar(' ');
					flg = 0;
				}
				ft_putchar(str[i]);
			}
			i++;
		}
		ft_putchar('\n');
	}
	return(0);
}

