/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:22:37 by jole              #+#    #+#             */
/*   Updated: 2022/12/08 01:20:46 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> //adweopgmweomgowemgowemogmwe

t_list	check_valid_map(t_list list)
{
	list.map_is = 1;
	list = check_wall_top(list);	
	list = check_valid_chars(list); 
	list = check_rectangle(list);
//	list = check_valid_route(list);
	return (list);
}

t_list	check_wall_top(t_list list)
{
	int	x;
	int	i;

	x = 0;
	i = list.col;
	while (i > 0)
	{
		if (list.array2[0][x++] != '1')
		{
			list.map_is = 0;
			return (list);
		}
		i--;
	}
	return (check_wall_left(list));
}

t_list	check_wall_left(t_list list)
{
	int y;
	int j;

	y = 0;
	j = list.row;
	while (j > 0)
	{
		if (list.array2[y++][0] != '1')
		{
			list.map_is = 0;
			return (list);
		}
		j--;
	}
	return (check_wall_bottom(list));
}

t_list	check_wall_bottom(t_list list)
{
	int i;
	int y;
	int x;

	x = 0;
	y = list.row - 1;
	i = list.col;
	while (i > 0)
	{
		if (list.array2[y][x++] != '1')
		{
			list.map_is = 0;
			return (list);
		}
		i--;
	}
	return (check_wall_right(list));
}

t_list	check_wall_right(t_list list)
{
	int y;
	int x;
	int	j;

	y = 0;
	x = list.col - 1;
	j = list.row;
	while (j > 0)
	{
		if (list.array2[y++][x] != '1')
		{
			list.map_is = 0;
			return (list);
		}
		j--;
	}
	return (list);
}
