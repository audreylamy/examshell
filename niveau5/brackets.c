#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int braclose(char *str, char c, int i, int b)
{
	while (b && *(++str) && (i++))
	{
		if (*str == c || *str == c + c % 2 + 1)
			*str == c ? ++b : --b;
	}
	return (i);
}

int brackets(char *str, char c)
{
	if (*str == c)
		return (1);
	else if (!*str || *str == ')' || *str == ']' || *str == '}')
		return (0);
	else if ( *str == '(' || *str == '{' || *str == '[')
		return (brackets(str + 1, *str + *str % 2 + 1) 
				* brackets(str + braclose(str, *str, 1, 1), c));
	else
		return(brackets(str + 1, c));
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (brackets(argv[i], 0) == 1)
			{
				ft_putstr("OK");
				ft_putchar('\n');
			}
			else
			{
				ft_putstr("Error");
				ft_putchar('\n');
			}
			i++;
		}
	}
	else
		ft_putchar('\n');
	return(0);
}
