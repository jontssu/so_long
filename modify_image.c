/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:00:00 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 15:21:08 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	modify_image(void *mlx_ptr, void *win_ptr, char *line)
{
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (line[i] != 0)
	{
		modify_image2(mlx_ptr, win_ptr, &line[i], y);
		while (line[i] != '\n' && line[i] != 0)
			i++;
		i++;
		y += 23;
	}
}

void	modify_image2(void *mlx_ptr, void *win_ptr, char *line, int y)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (line[i] != '\n' && line[i] != 0)
	{
		if (line[i] == '1')
			x += put_wall(mlx_ptr, win_ptr, x, y);
		if (line[i] == '0')
			x += put_tile(mlx_ptr, win_ptr, x, y);
		if (line[i] == 'C')
			x += put_collectable(mlx_ptr, win_ptr, x, y);
		if (line[i] == 'P')
			x += put_player(mlx_ptr, win_ptr, x, y);
		if (line[i] == 'E')
			x += put_exit(mlx_ptr, win_ptr, x, y);
		i++;
	}
}
