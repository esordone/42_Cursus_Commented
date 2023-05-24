/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lst_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:26:25 by esordone          #+#    #+#             */
/*   Updated: 2023/02/01 13:27:11 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_add_lst_front(t_nodo **lst, t_nodo *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		(*lst)->prev = NULL;
		(*lst)->next = NULL;
		return ;
	}
	new->next = (*lst);
	(*lst)->prev = new;
	*lst = new;
	new->prev = NULL;
}
