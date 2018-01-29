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
	while ((str[*start] == ' ' || str[*start] == '\t' || str[*start] == '\n') && str[*start])
		*start = *start + 1;
	while (str[*start] != ' ' && str[*start] != '\t' && str[*start] != '\n' && str[*start])
	{
		word[j] = str[*start];
		j++;
		*start = *start + 1;
	}
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

char *ft_rev(char **tab)
{
	char *str;
	char *first_word;
	int i;
	int j;
	int a;
	int b;

	i = 1;
	j = 0;
	a = 0;
	b = 0;
	first_word = (char*)malloc(sizeof(char) * 4096);
	str = (char*)malloc(sizeof(char) * 4096);
	while (tab[0][j] != '\0')
	{
		first_word[a] = tab[0][j];
		a++;
		j++;
	}
	first_word[a] = '\0';
	j = 0;
	while (tab[i])
	{
		while(tab[i][j] != '\0')
		{
			str[b] = tab[i][j];
			b++;
			j++;
		}
		str[b] = ' ';
		b++;
		j = 0;
		i++;
	}
	a = 0;
	while (first_word[a] != '\0')
	{
		str[b] = first_word[a];
		a++;
		b++;
	}
	str[b] = '\0';
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


	

