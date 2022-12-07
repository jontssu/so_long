/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realize_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:05:44 by jole              #+#    #+#             */
/*   Updated: 2022/12/07 23:40:37 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> ///// asdas dffwpeokfeofsopfkskofsofk

void	event_w(t_list *list, int x)
{
	int	y;

	y = 0;
	while (list->array[y][x] != 0)
	{
		while (list->array[y][x] != 0)
		{
			if (list->array[y][x] == 'P')
				break;
			x++;
		}
		if (list->array[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	if (list->array[y - 1][x] != '1')
	{
		if (list->array[y - 1][x] == 'E' && list->poopoos != 0)
			return ;
		list->actions += 1;
		printf("%d\n", list->actions);
		if (list->array[y - 1][x] == 'C')
		{
			printf("hey i collected poopoo\n");
			list->poopoos -= 1;
		}
		list->array[y - 1][x] = 'P';
		list->array[y][x] = '0';
	}
	printf("poopoos:%d\n", list->poopoos);
	modify_image(*list); 
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
				break;
			x++;
		}
		if (list->array[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	if (list->array[y][x - 1] != '1')
	{
		if (list->array[y][x - 1] == 'E' && list->poopoos != 0)
			return ;
		list->actions += 1;
		printf("%d\n", list->actions);
		if (list->array[y][x - 1] == 'C')
		{
			printf("hey i collected poopoo\n");
			list->poopoos -= 1;
		}
		if (list->poopoos == 0 && list->array[y][x - 1] == 'E')
			exit (0);
		list->array[y][x - 1] = 'P';
		list->array[y][x] = '0';
	}
	printf("poopoos:%d\n", list->poopoos);
	modify_image(*list); 
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
				break;
			x++;
		}
		if (list->array[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	if (list->array[y + 1][x] != '1')
	{
		list->actions += 1;
		printf("%d\n", list->actions);
		if (list->array[y + 1][x] == 'C')
		{
			printf("hey i collected poopoo\n");
			list->poopoos -= 1;
		}
		list->array[y + 1][x] = 'P';
		list->array[y][x] = '0';
	}
	printf("poopoos:%d\n", list->poopoos);
	modify_image(*list);
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
				break;
			x++;
		}
		if (list->array[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	if (list->array[y][x + 1] != '1')
	{
		list->actions += 1;
		printf("%d\n", list->actions);
		if (list->array[y][x + 1] == 'C')
		{
			printf("hey i collected poopoo\n");
			list->poopoos -= 1;
		}
		list->array[y][x + 1] = 'P';
		list->array[y][x] = '0';
	}
	printf("poopoos:%d\n", list->poopoos);
	modify_image(*list); 
}
