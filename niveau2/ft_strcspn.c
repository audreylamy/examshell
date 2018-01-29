#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + 48);
}

size_t ft_strcspn(const char *s1, const char *s2)
{
	size_t size;
	int j;

	size = 0;
	j = 0;
	if (s2[j] == '\0')
	{
		while (s1[size] != '\0')
		{
			size++;
		}
		return(size);
	}
	while (s2[j] != '\0')
	{
		size = 0;
		while (s1[size] != '\0')
		{
			if (s1[size] == s2[j])
			{
				return (size);
			}

			size++;
		}
		j++;
	}
	size = 0;
	if (s2[j] == '\0')
	{
		while (s1[size] == ' ')
		{
			size++;
		}
		return(size);
	}
	return(0);
}

int main(void)
{
	char *str1;
	char *str2;

	str1 = " ";
	str2 = "1234567890";
	ft_putnbr(ft_strcspn(str1, str2));
	ft_putchar ('\n');
	ft_putnbr(strcspn(str1, str2));
	return(0);
}

