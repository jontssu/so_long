/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:23:53 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 15:36:17 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	put_wall(void *mlx_ptr, void *win_ptr, int x, int y)
{
	void	*wall;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	wall = mlx_xpm_file_to_image(mlx_ptr, "wall", &img_width, &img_height);
	mlx_put_image_to_window(mlx_ptr, win_ptr, wall, x, y);
	return (23);
}

int	put_tile(void *mlx_ptr, void *win_ptr, int x, int y)
{
	void	*tile;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	tile = mlx_xpm_file_to_image(mlx_ptr, "tile", &img_width, &img_height);
	mlx_put_image_to_window(mlx_ptr, win_ptr, tile, x, y);
	return (23);
}

int	put_collectable(void *mlx_ptr, void *win_ptr, int x, int y)
{
	void	*collectable;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	collectable = mlx_xpm_file_to_image(mlx_ptr, "collectable", &img_width, &img_height);
	mlx_put_image_to_window(mlx_ptr, win_ptr, collectable, x, y);
	return (23);
}

int	put_player(void *mlx_ptr, void *win_ptr, int x, int y)
{
	void	*player;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	player = mlx_xpm_file_to_image(mlx_ptr, "player", &img_width, &img_height);
	mlx_put_image_to_window(mlx_ptr, win_ptr, player, x, y);
	return (23);
}

int	put_exit(void *mlx_ptr, void *win_ptr, int x, int y)
{
	void	*exit;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	exit = mlx_xpm_file_to_image(mlx_ptr, "exit", &img_width, &img_height);
	mlx_put_image_to_window(mlx_ptr, win_ptr, exit, x, y);
	return (23);
}
