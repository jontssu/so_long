/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:23:53 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 14:26:54 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	put_wall(t_list *list, int pixel_x, int pixel_y)
{
	void	*wall;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	wall = mlx_xpm_file_to_image(list->mlx, "wall", &img_width, &img_height);
	mlx_put_image_to_window(list->mlx, list->win, wall, pixel_x, pixel_y);
	mlx_destroy_image(list->mlx, wall);
	return (23);
}

int	put_tile(t_list *list, int pixel_x, int pixel_y)
{
	void	*tile;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	tile = mlx_xpm_file_to_image(list->mlx, "tile", &img_width, &img_height);
	mlx_put_image_to_window(list->mlx, list->win, tile, pixel_x, pixel_y);
	mlx_destroy_image(list->mlx, tile);
	return (23);
}

int	put_collectable(t_list *list, int pixel_x, int pixel_y)
{
	void	*poop;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	poop = mlx_xpm_file_to_image(list->mlx, "poop", &img_width, &img_height);
	mlx_put_image_to_window(list->mlx, list->win, poop, pixel_x, pixel_y);
	mlx_destroy_image(list->mlx, poop);
	return (23);
}

int	put_player(t_list *list, int pixel_x, int pixel_y)
{
	void	*player;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	player = mlx_xpm_file_to_image(list->mlx, "player", \
			&img_width, &img_height);
	mlx_put_image_to_window(list->mlx, list->win, player, pixel_x, pixel_y);
	mlx_destroy_image(list->mlx, player);
	return (23);
}

int	put_exit(t_list *list, int pixel_x, int pixel_y)
{
	void	*exit;
	int		img_width;
	int		img_height;

	img_width = 0;
	img_height = 0;
	exit = mlx_xpm_file_to_image(list->mlx, "exit", &img_width, &img_height);
	mlx_put_image_to_window(list->mlx, list->win, exit, pixel_x, pixel_y);
	mlx_destroy_image(list->mlx, exit);
	return (23);
}
