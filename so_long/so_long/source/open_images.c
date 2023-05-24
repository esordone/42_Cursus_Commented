/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:29:20 by esordone          #+#    #+#             */
/*   Updated: 2023/04/25 10:32:48 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	open_player_img(t_game *game)
{
	int	img_size;

	game->player.action_img = mlx_xpm_file_to_image(game->mlx,
			"images/xpm/Maula1.xpm", &img_size, &img_size);
	game->player.current_img = game->player.action_img;
}

void	open_images(t_game *game)
{
	open_player_img(game);
}
