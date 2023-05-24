/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:07 by esordone          #+#    #+#             */
/*   Updated: 2023/04/05 17:26:34 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_nodo
{
	struct s_nodo	*next;
	struct s_nodo	*prev;
	int				index;
	int				val;
	int				pos;
}					t_nodo;

typedef struct s_data
{
	int		count;
	int		start;
	int		num_elements;
	int		cut;
	int		more_cut;
}			t_data;

//valid input
int		rep_number(int argc, char **argv, int i);
int		max_int(int argc, char **argv, int i);
int		not_int(int argc, char **argv, int i);
int		valid_input(int argc, char **argv);

//info
void	ft_index(t_nodo **a);
t_nodo	*ft_min(t_nodo **a);
int		is_sorted(t_nodo *a);
void	mostra(t_nodo *a, t_nodo *b);

//lists
t_nodo	*new_lst(int val, int pos);
void	ft_clear_stack(t_nodo **stack);
t_nodo	*last_lst(t_nodo *lst);
void	add_lst_back(t_nodo **lst, t_nodo *new);
void	ft_add_lst_front(t_nodo **lst, t_nodo *new);
void	ft_clear_lst(t_nodo **lst);
int		ft_len(char *s);

//algorithm
void	sort_params(int argc, t_nodo **stack_a, t_nodo **stack_b);
void	sort_three(t_nodo **stack);
void	sort_five(int argc, t_nodo **stack_a, t_nodo **stack_b);
void	big_sort(t_nodo **stack_a, t_nodo **stack_b, int chunks);
void	move_x_chunks_to_b(t_nodo **stack_a, t_nodo **stack_b, int chunks);
int		ft_max(t_nodo **stack);
int		ft_index_max(t_nodo **stack);
int		ft_divide(t_nodo	**stack);
int		ft_len_lst(t_nodo *stack);
int		min(t_nodo **stack);
void	ft_min_first(t_nodo **stack);
int		ft_index_min(t_nodo **stack);
void	put_in_a(t_nodo **stack_a, t_nodo **stack_b);
int		smart_rotate(t_nodo **stack_b, int search_num);
int		get_max_pos(t_nodo **stack, int max_index);
int		get_min_pos(t_nodo **stack, int min_index);

//operations
void	sa(t_nodo **stack);
void	sb(t_nodo **stack);
void	ss(t_nodo **stack_a, t_nodo **stack_b);
void	pb(t_nodo **stack_a, t_nodo **stack_b);
void	pa(t_nodo **stack_b, t_nodo **stack_a);
void	rb(t_nodo **stack_b);
void	ra(t_nodo **stack_a);
void	rr(t_nodo **stack_a, t_nodo **stack_b);
void	rrb(t_nodo **stack_b);
void	rra(t_nodo **stack_a);
void	rrr(t_nodo **stack_a, t_nodo **stack_b);
void	ft_swap(t_nodo **stack);
void	ft_push(t_nodo **stack_a, t_nodo **stack_b);
void	ft_push_a(t_nodo **stack_b, t_nodo **stack_a);
void	ft_rotate(t_nodo **stack);
void	ft_reverse_rotate(t_nodo **stack);

#endif
