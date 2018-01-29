#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str++)
		write(1, str, 1);
}

int ft_inter(char c, char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int ft_first(char c , char *str, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		if (str[i] == c)
		return(0);	
		i++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	int i;
	char *str1;
	char *str2;

	str1 = argv[1];
	str2 = argv[2];
	i = 0;
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		while(str1[i] != '\0')
		{
			if ((ft_inter(str1[i], str2) == 1) && (ft_first(str1[i], str1, i) == 1))
				ft_putchar(str1[i]);
		i++;
		}		
	ft_putchar('\n');
	}
	return(0);
}

