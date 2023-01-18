/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:45:52 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 14:27:54 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialize_window(t_list *list)
{
	if (list->col > 21 && list->row > 21)
	{
		list->win = mlx_new_window(list->mlx, 21 * 23, 21 * 23, "1");
		list->printx = 21;
		list->printy = 21;
	}
	else if (list->col <= 21 && list->row > 21)
	{
		list->printx = list->col;
		list->printy = 21;
		list->win = mlx_new_window(list->mlx, list->col * 23, 21 * 23, "1");
	}
	else if (list->col > 21 && list->row <= 21)
	{
		list->printx = 21;
		list->printy = list->row;
		list->win = mlx_new_window(list->mlx, 21 * 23, list->row * 23, "1");
	}
	else
	{
		list->printx = list->col;
		list->printy = list->row;
		list->win = mlx_new_window(list->mlx, list->col * 23, \
				list->row * 23, "1");
	}
}
