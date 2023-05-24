/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:55:13 by esordone          #+#    #+#             */
/*   Updated: 2023/04/24 16:55:20 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPS_H
# define MAPS_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../mlx/mlx.h"
#include "../libft/libft.h"

//int		valid_file(int argc, char *file);
//char	**read_map(char *file);
//int		valid_map(char **map);

typedef struct s_mapcheckerdata
{
	t_vector	size;
	t_vector	point;
	t_bool		b_player;
	t_bool		b_exit;
	t_bool		b_collect;
}				t_mapcheckerdata;

#endif

