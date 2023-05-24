/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:32:49 by esordone          #+#    #+#             */
/*   Updated: 2023/01/19 11:40:38 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_nodo	*new_lst(int val, int pos)
{
	t_nodo	*n;

	n = (t_nodo *)malloc(sizeof(t_nodo));
	if (!n)
		return (NULL);
	n->index = 0;
	n->val = val;
	n->pos = pos;
	n->index = -1;
	n->next = NULL;
	n->prev = NULL;
	return (n);
}

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
