/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:40:10 by amarcele          #+#    #+#             */
/*   Updated: 2020/10/13 13:52:37 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_blist		*ft_lstnewb(void *content)
{
	t_blist	*new;

	new = (t_blist *)malloc(sizeof(t_blist));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
