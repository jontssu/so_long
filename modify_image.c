/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:00:00 by jole              #+#    #+#             */
/*   Updated: 2022/12/07 23:05:16 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> /// asdasdfmwepogmwegowemgwemopgmweogmowemgowemop

void	modify_image(t_list list)
{
	int		x;
	int		y;
	int		pixel_x;
	int		pixel_y;
	int		object;

	x = 0;
	y = 0;
	pixel_x = 0;
	pixel_y = 0;
	while (y < list.row)
	{
		while (list.array[y][x] != 0)
		{
			object = list.array[y][x];
			pixel_x = modify_image2(list, pixel_x, pixel_y, object);
			x++;
		}
		x = 0;
		y++;
		pixel_x = 0;
		pixel_y += 23;
	}
}

int	modify_image2(t_list list, int pixel_x, int pixel_y, int object)
{
	if (object == '1')
		pixel_x += put_wall(list, pixel_x, pixel_y);
	if (object == '0')
		pixel_x += put_tile(list, pixel_x, pixel_y);
	if (object == 'C')
		pixel_x += put_collectable(list, pixel_x, pixel_y);
	if (object == 'P')
		pixel_x += put_player(list, pixel_x, pixel_y);
	if (object == 'E')
		pixel_x += put_exit(list, pixel_x, pixel_y);
	return (pixel_x);
}
