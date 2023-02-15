/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rectangularity.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 06:05:17 by jole              #+#    #+#             */
/*   Updated: 2023/02/01 19:44:03 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_rectangularity(t_list *list)
{
	int	i;
	int	size;
	int	count;

	i = 0;
	size = 0;
	count = 0;
	while (list->line[i++] != '\n')
		size++;
	i = 0;
	while (list->line[i] != 0)
	{
		if (list->line[i] == '\n')
			count++;
		i++;
	}
	i -= count;
	if (i != (size * count))
	{
		ft_printf("Error\nMap is not rectangular\n");
		terminate(list);
	}
}
