/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:00:00 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 14:27:39 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	modify_image(t_list *list)
{
	int		object;

	modify_image_variables(list);
	while (list->ycount < list->printy)
	{
		while (list->xcount < list->printx && \
				list->array[list->y][list->x] != 0)
		{
			object = list->array[list->y][list->x];
			list->pixel_x = modify_image2(list, object);
			list->x++;
			list->xcount++;
		}
		list->x = list->pcol - 10;
		if (list->x < 0)
			list->x = 0;
		if (list->col - list->pcol <= 10 && list->col > 21)
			list->x -= 11 - (list->col - list->pcol);
		list->y++;
		list->xcount = 0;
		list->ycount++;
		list->pixel_x = 0;
		list->pixel_y += 23;
	}
}

int	modify_image2(t_list *list, int object)
{
	if (object == '1')
		mlx_put_image_to_window(list->mlx, list->win, list->wall, \
				list->pixel_x, list->pixel_y);
	if (object == '0')
		mlx_put_image_to_window(list->mlx, list->win, list->tile, \
				list->pixel_x, list->pixel_y);
	if (object == 'C')
		mlx_put_image_to_window(list->mlx, list->win, list->poop, \
				list->pixel_x, list->pixel_y);
	if (object == 'P')
		mlx_put_image_to_window(list->mlx, list->win, list->player, \
				list->pixel_x, list->pixel_y);
	if (object == 'E')
		mlx_put_image_to_window(list->mlx, list->win, list->exit, \
				list->pixel_x, list->pixel_y);
	list->pixel_x += 23;
	return (list->pixel_x);
}

void	modify_image_variables(t_list *list)
{
	list->x = list->pcol - 10;
	list->y = list->prow - 10;
	if (list->x < 0)
		list->x = 0;
	if (list->y < 0)
		list->y = 0;
	if (list->col - list->pcol <= 10 && list->col > 21)
		list->x -= 11 - (list->col - list->pcol);
	if (list->row - list->prow <= 10 && list->row > 21)
		list->y -= 11 - (list->row - list->prow);
	list->xcount = 0;
	list->ycount = 0;
	list->pixel_x = 0;
	list->pixel_y = 0;
}
