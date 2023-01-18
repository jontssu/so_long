/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realize_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:05:44 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 18:35:44 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	event_w(t_list *list, int x)
{
	int	y;

	y = 0;
	while (list->array[y][x] != 0)
	{
		while (list->array[y][x] != 0)
		{
			if (list->array[y][x] == 'P')
				break ;
			x++;
		}
		if (list->array[y][x] == 'P')
			break ;
		x = 0;
		y++;
	}
	if (list->array[y - 1][x] != '1')
	{
		list->prow -= 1;
		list = event_w2(list, x, y);
	}
}

void	event_a(t_list *list, int x)
{
	int	y;

	y = 0;
	while (list->array[y][x] != 0)
	{
		while (list->array[y][x] != 0)
		{
			if (list->array[y][x] == 'P')
				break ;
			x++;
		}
		if (list->array[y][x] == 'P')
			break ;
		x = 0;
		y++;
	}
	if (list->array[y][x - 1] != '1')
	{
		list->pcol -= 1;
		list = event_a2(list, x, y);
	}
}

void	event_s(t_list *list, int x)
{
	int	y;

	y = 0;
	while (list->array[y][x] != 0)
	{
		while (list->array[y][x] != 0)
		{
			if (list->array[y][x] == 'P')
				break ;
			x++;
		}
		if (list->array[y][x] == 'P')
			break ;
		x = 0;
		y++;
	}
	if (list->array[y + 1][x] != '1')
	{
		list->prow += 1;
		list = event_s2(list, x, y);
	}
}

void	event_d(t_list *list, int x)
{
	int	y;

	y = 0;
	while (list->array[y][x] != 0)
	{
		while (list->array[y][x] != 0)
		{
			if (list->array[y][x] == 'P')
				break ;
			x++;
		}
		if (list->array[y][x] == 'P')
			break ;
		x = 0;
		y++;
	}
	if (list->array[y][x + 1] != '1')
	{
		list->pcol += 1;
		list = event_d2(list, x, y);
	}
}
