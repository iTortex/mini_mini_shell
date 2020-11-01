#include "../minishell.h"

void	new_lst(t_blist *lst, t_blist *new)
{
	lst->next = new;
	new->prev = lst;
}