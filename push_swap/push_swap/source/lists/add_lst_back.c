/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_lst_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:41:34 by esordone          #+#    #+#             */
/*   Updated: 2023/01/19 11:40:20 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_lst_back(t_nodo **lst, t_nodo *new)
{
	t_nodo	*aux;

	aux = *lst;
	if (!*lst)
	{
		*lst = new;
		(*lst)->prev = NULL;
		(*lst)->next = NULL;
		return ;
	}
	aux = last_lst(*lst);
	if (!aux)
		return ;
	aux->next = new;
	new->prev = aux;
}
