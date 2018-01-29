#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

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

void ft_list_add(t_list **begin_list, t_list *first)
{
	first->next = *begin_list;
	*begin_list = first;
}

int ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return(size);
}

int main(void)
{
	t_list *begin_list;
	t_list *first;

	begin_list = (t_list*)malloc(sizeof(t_list));
	first = (t_list*)malloc(sizeof(t_list));
	ft_list_add(&begin_list, first);
	ft_putnbr(ft_list_size(begin_list));
	return(0);
}


