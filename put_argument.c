/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:23:53 by jole              #+#    #+#             */
/*   Updated: 2022/12/07 23:04:40 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	put_wall(t_list list, int pixel_x, int pixel_y)
{
	void	*wall;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	wall = mlx_xpm_file_to_image(list.mlx_ptr, "wall", &img_width, &img_height);
	mlx_put_image_to_window(list.mlx_ptr, list.win_ptr, wall, pixel_x, pixel_y);
	return (23);
}

int	put_tile(t_list list, int pixel_x, int pixel_y)
{
	void	*tile;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	tile = mlx_xpm_file_to_image(list.mlx_ptr, "tile", &img_width, &img_height);
	mlx_put_image_to_window(list.mlx_ptr, list.win_ptr, tile, pixel_x, pixel_y);
	return (23);
}

int	put_collectable(t_list list, int pixel_x, int pixel_y)
{
	void	*collectable;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	collectable = mlx_xpm_file_to_image(list.mlx_ptr, "collectable", &img_width, &img_height);
	mlx_put_image_to_window(list.mlx_ptr, list.win_ptr, collectable, pixel_x, pixel_y);
	return (23);
}

int	put_player(t_list list, int pixel_x, int pixel_y)
{
	void	*player;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	player = mlx_xpm_file_to_image(list.mlx_ptr, "player", &img_width, &img_height);
	mlx_put_image_to_window(list.mlx_ptr, list.win_ptr, player, pixel_x, pixel_y);
	return (23);
}

int	put_exit(t_list list, int pixel_x, int pixel_y)
{
	void	*exit;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	exit = mlx_xpm_file_to_image(list.mlx_ptr, "exit", &img_width, &img_height);
	mlx_put_image_to_window(list.mlx_ptr, list.win_ptr, exit, pixel_x, pixel_y);
	return (23);
}
