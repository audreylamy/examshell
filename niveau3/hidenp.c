#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *s1;
	char *s2;

	i = 0;
	j = 0;
	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		while(s1[i] != '\0' && s2[j] != '\0')
		{	
			if (s1[i] == s2[j])
			{
				i++;
			}
			j++;
		}
		if (s1[i] == '\0')
		{
			ft_putchar('1');
		}
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	return(0);
}

