/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_route.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:52:20 by jole              #+#    #+#             */
/*   Updated: 2023/02/03 15:39:35 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_list	*check_valid_route(t_list *list, int x, int y)
{
	while (y < list->row && list->array2[y][x] != 'P')
	{
		x = 0;
		while (x < list->col && list->array2[y][x] != 'P')
			x++;
		if (list->array2[y][x] != 'P')
			y++;
	}
	if (y == list->row)
	{
		ft_printf("Error\nStarting position not found\n");
		terminate(list);
	}
	list->pcol = x;
	list->prow = y;
	list = fill_the_route(list, x, y);
	list = check_for_exit(list);
	list = check_for_collectibles(list);
	return (list);
}

t_list	*fill_the_route(t_list *list, int x, int y)
{
	if (list->array2[y][x + 1] == '0' || list->array2[y][x + 1] == 'C' \
			|| list->array2[y][x + 1] == 'E')
	{
		if (list->array2[y][x + 1] == 'E')
			list->array2[y][x + 1] = 'U';
		else if (list->array2[y][x + 1] == 'C')
			list->array2[y][x + 1] = 'V';
		else
			list->array2[y][x + 1] = 'P';
		fill_the_route(list, x + 1, y);
	}
	if (list->array2[y][x - 1] == '0' || list->array2[y][x - 1] == 'C' \
			|| list->array2[y][x - 1] == 'E')
	{
		if (list->array2[y][x - 1] == 'E')
			list->array2[y][x - 1] = 'U';
		else if (list->array2[y][x - 1] == 'C')
			list->array2[y][x - 1] = 'V';
		else
			list->array2[y][x - 1] = 'P';
		fill_the_route(list, x - 1, y);
	}
	list = fill_the_route2(list, x, y);
	return (list);
}

t_list	*fill_the_route2(t_list *list, int x, int y)
{
	if (list->array2[y - 1][x] == '0' || list->array2[y - 1][x] == 'C' \
			|| list->array2[y - 1][x] == 'E')
	{
		if (list->array2[y - 1][x] == 'E')
			list->array2[y - 1][x] = 'U';
		else if (list->array2[y - 1][x] == 'C')
			list->array2[y - 1][x] = 'V';
		else
			list->array2[y - 1][x] = 'P';
		fill_the_route(list, x, y - 1);
	}
	if (list->array2[y + 1][x] == '0' || list->array2[y + 1][x] == 'C' \
			|| list->array2[y + 1][x] == 'E')
	{
		if (list->array2[y + 1][x] == 'E')
			list->array2[y + 1][x] = 'U';
		else if (list->array2[y + 1][x] == 'C')
			list->array2[y + 1][x] = 'V';
		else
			list->array2[y + 1][x] = 'P';
		fill_the_route(list, x, y + 1);
	}
	return (list);
}

t_list	*check_for_exit(t_list *list)
{
	int	x;
	int	y;
	int	exits;

	x = 0;
	y = 0;
	exits = 0;
	while (y < list->row)
	{
		while (x < list->col)
		{
			if (list->array2[y][x] == 'U')
				exits++;
			x++;
		}
		x = 0;
		y++;
	}
	if (exits != 1)
	{
		ft_printf("Error\nThe map must contain 1 exit\n");
		terminate(list);
	}
	return (list);
}

t_list	*check_for_collectibles(t_list *list)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < list->row)
	{
		while (x < list->col)
		{
			if (list->array2[y][x] == 'V')
				list->poopoo_check += 1;
			x++;
		}
		x = 0;
		y++;
	}
	if (list->poopoo_check != list->poopoos)
	{
		ft_printf("Error\nThere is a poopoo that can't be reached!\n");
		terminate(list);
	}
	return (list);
}
