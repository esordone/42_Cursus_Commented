/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:15:12 by esordone          #+#    #+#             */
/*   Updated: 2023/04/25 12:15:28 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	valid_map(char **map, char *file)
{
	t_map	data;
	int		max_y;

	init_struct(&data);
	map = read_map(file);
	if (!map)
		return (0);
	max_y = num_lines_split(file);
	while ((data.y + 1) <= (max_y - 2))
	{
		while ((data.x + 1) <= ((int)ft_strlen(map[0]) - 2))
		{
			if (map[data.y + 1][data.x + 1] != data.empty
				&& map[data.y + 1][data.x + 1] != data.colect &&
				map[data.y + 1][data.x + 1] != data.start &&
				map[data.y + 1][data.x + 1] != data.exit &&
				map[data.y + 1][data.x + 1] != data.wall)
				return (0);
			data.x++;
		}
		data.x = 0;
		data.y++;
	}
	return (1);
}

int	valid_input_map(char **argv, char *file)
{
	if ((walls_map(argv, file) != 1) || (rectangular_map(argv, file) != 1))
	{
		ft_printf("Error\nThe map is not closed or is not a rectangle.\n");
		return (0);
	}
	if ((exit_on_map(argv, file) != 1))
	{
		ft_printf("Error\nThere is no exit in the map.\n");
		return (0);
	}
	if ((start_on_map(argv, file) != 1))
	{
		ft_printf("Error\nThere is no starting position in the map.\n");
		return (0);
	}
	if ((object_on_map(argv, file) != 1))
	{
		ft_printf("Error\nThere are no collectibles on the map.\n");
		return (0);
	}
	return (1);
}

int	valid_double_input(char **map, char *file)
{
	t_map	data;

	init_struct(&data);
	if (check_doubles(map, file, data.start) != 1)
	{
		ft_printf("Error\nThere are more than one start in the map.\n");
		return (0);
	}
	if (check_doubles(map, file, data.exit) != 1)
	{
		ft_printf("Error\nThere are more than one exit in the map.\n");
		return (0);
	}
	if (valid_map(map, file) != 1)
	{
		ft_printf("Error\nUnexpected character found on the map\n");
		return (0);
	}
	return (1);
}

int	valid_input(char **argv, char *file)
{
	if (valid_input_map(argv, file) == 0)
		return (0);
	if (valid_double_input(argv, file) == 0)
		return (0);
	if (valid_map(argv, file) == 0)
		return (0);
	return (1);
}
