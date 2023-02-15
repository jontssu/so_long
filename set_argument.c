/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:02:57 by jole              #+#    #+#             */
/*   Updated: 2023/02/01 17:37:36 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_argument(t_list *list)
{
	int		width;
	int		height;

	width = 0;
	height = 0;
	list->wall = mlx_xpm_file_to_image(list->mlx, "wall", &width, &height);
	list->tile = mlx_xpm_file_to_image(list->mlx, "tile", &width, &height);
	list->poop = mlx_xpm_file_to_image(list->mlx, "poop", &width, &height);
	list->player = mlx_xpm_file_to_image(list->mlx, "player", &width, &height);
	list->exit = mlx_xpm_file_to_image(list->mlx, "exit", &width, &height);
}
