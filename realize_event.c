/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realize_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:05:44 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 21:14:08 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> ///// asdas dffwpeokfeofsopfkskofsofk

void	event_w(char **param)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (param[y][x] != 0)
	{
		while (param[y][x] != 0)
		{
			if (param[y][x] == 'P')
				break;
			x++;
		}
		if (param[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	printf("you pressed w\n");
	if (param[y - 1][x] != '1')
	{
		param[y - 1][x] = 'P';
		param[y][x] = '0';
	}
	printf("%s\n", param[0]);
	printf("%s\n", param[1]);
	printf("%s\n", param[2]);
	printf("%s\n", param[3]);
	printf("%s\n", param[4]);
}

void	event_a(char **param)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (param[y][x] != 0)
	{
		while (param[y][x] != 0)
		{
			if (param[y][x] == 'P')
				break;
			x++;
		}
		if (param[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	printf("you pressed a\n");
	if (param[y][x - 1] != '1')
	{
		param[y][x - 1] = 'P';
		param[y][x] = '0';
	}
	printf("%s\n", param[0]);
	printf("%s\n", param[1]);
	printf("%s\n", param[2]);
	printf("%s\n", param[3]);
	printf("%s\n", param[4]);
}

void	event_s(char **param)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (param[y][x] != 0)
	{
		while (param[y][x] != 0)
		{
			if (param[y][x] == 'P')
				break;
			x++;
		}
		if (param[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	printf("you pressed s\n");
	if (param[y + 1][x] != '1')
	{
		param[y + 1][x] = 'P';
		param[y][x] = '0';
	}
	printf("%s\n", param[0]);
	printf("%s\n", param[1]);
	printf("%s\n", param[2]);
	printf("%s\n", param[3]);
	printf("%s\n", param[4]);
}

void	event_d(char **param)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (param[y][x] != 0)
	{
		while (param[y][x] != 0)
		{
			if (param[y][x] == 'P')
				break;
			x++;
		}
		if (param[y][x] == 'P')
			break;	
		x = 0;
		y++;
	}
	printf("you pressed d\n");
	if (param[y][x + 1] != '1')
	{
		param[y][x + 1] = 'P';
		param[y][x] = '0';
	}
	printf("%s\n", param[0]);
	printf("%s\n", param[1]);
	printf("%s\n", param[2]);
	printf("%s\n", param[3]);
	printf("%s\n", param[4]);
}
