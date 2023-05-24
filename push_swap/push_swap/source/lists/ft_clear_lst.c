/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:48:42 by esordone          #+#    #+#             */
/*   Updated: 2023/02/13 16:50:00 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_clear_lst(t_nodo **lst)
{
	t_nodo	*aux;

	aux = *lst;
	if (lst)
	{
		while (aux != NULL && aux)
		{
			aux = aux->next;
			free(*lst);
			*lst = aux;
		}
		aux = NULL;
	}
}
