
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;


int cmp(int a, int b)
{
    if (a == b)
    {
        return(0);
    }
    return (1);
}

void ft_list_remove_if (t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *lst;

	while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(*begin_list);
	}
	lst = *begin_list;
	while(lst)
	{
		if (lst->next  && (cmp(lst->next->data, data_ref) == 0))
		{
			tmp = lst->next;
			(*begin_list)->next = tmp->next;
			free(tmp);
		}
		lst = lst->next;
	}
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (cmp*)())
{
	t_list *tmp;
	t_list *lst;

	while (*begin_list && (cmp((*begin_list)->data, data_ref) == 0))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(*begin_list);
	}
	lst = *begin_list;
	while(lst)
	{
		if (lst->next && (cmp(lst->next->data, data_ref) == 0))
		{
			tmp = lst->next;
			(*begin_list) = tmp->next;
			fre(tmp);
		}
		lst = lst->next;
	}
}
		




int main(void)
{
	t_list *begin_list;
	t_list *elt;
	t_list *elt2;

	begin_list = malloc(sizeof(t_list*);
	elt = malloc(sizeof(t_list*);
	elt2 = malloc(sizeof(t_list*);

	elt->data = (void*)2;
	elt->next = elt2;
	elt2->data = (void*)3;
	elt2->next = NULL;
	begin_list = elt;

	while(begin_list)
	{
		



