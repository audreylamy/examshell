#include <unistd.h>
#include <stdlib.h>

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

char *ft_words(char *str, int *start)
{
	char *word;
	int j;

	j = 0;
	word = (char*)malloc(sizeof(char) * 4096);
	while (str[*start] != ' ' && str[*start] != '\t' && str[*start] != '\n' && str[*start])
	{
		word[j] = str[*start];
		j++;
		*start = *start + 1;
	}
    while ((str[*start] == ' ' || str[*start] == '\t' || str[*start] == '\n') && str[*start])
        *start = *start + 1;
	word[j] = '\0';
	return(word);
}

char **ft_split(char *str)
{
	char **split;
	int i;
	int j;

	j = 0;
	i = 0;
	split = (char**)malloc(sizeof(char*) * 246);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		split[j] = ft_words(str, &i); 
		j++;	
	}
	split[j] = NULL;
	return(split);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb  = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int ft_nb_words(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(tab[i])
	{
		while(tab[i][j] != '\0')
		{
			j++;
		}
		i++;
	}
	return(i);
}

char *ft_rev(char **tab)
{
	char *str;
	int i;
	int j;
	int nb_words;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(char) * 4096);	
	nb_words = ft_nb_words(tab);
	nb_words--;
	while (tab[nb_words] > 0)
	{
		while (tab[nb_words][j] != '\0')
		{
			str[i] = tab[nb_words][j];
			j++;
			i++;
		}
		str[i] = ' ';
		i++;
		j = 0;
		nb_words--;
	}
	i--;
	str[i] = '\0';
	return(str);
}

int main(int argc, char **argv)
{
	char *str;
	char *str1;
	char **tab;
	int i;

	str = argv[1];
	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		tab = ft_split(str);
		str1 = ft_rev(tab);
		ft_putstr(str1);
		ft_putchar('\n');
	}
	return(0);
}	

