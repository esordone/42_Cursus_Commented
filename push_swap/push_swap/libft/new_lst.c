/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:39:10 by esordone          #+#    #+#             */
/*   Updated: 2023/01/16 14:46:10 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*new_lst(int content)
{
	t_list	*n;

	n = (t_list *)malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = &content;
	n->next = NULL;
	return (n);
}
