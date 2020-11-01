/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdeloneb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 16:54:52 by amarcele          #+#    #+#             */
/*   Updated: 2020/10/13 13:52:34 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_lstdeloneb(t_blist *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}
