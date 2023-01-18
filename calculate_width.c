/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:59:11 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 18:53:19 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	calculate_width(t_list *list)
{
	int	i;

	list->col = 0;
	i = 0;
	while (list->line[i] != '\n' && list->line[i] != 0)
	{
		i++;
		list->col++;
	}
	calculate_height(list);
}

void	calculate_height(t_list *list)
{
	int	i;

	i = 0;
	list->row = 0;
	while (list->line[i] != 0)
	{
		if (list->line[i] == '\n')
		{
			list->row++;
		}
		i++;
	}
	if (list->row > 0)
		list->row--;
}
