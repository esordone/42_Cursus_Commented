/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:56:13 by esordone          #+#    #+#             */
/*   Updated: 2023/01/19 11:40:28 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_nodo	*last_lst(t_nodo *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
