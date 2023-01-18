/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realize_event2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:34:51 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 14:48:24 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_list	*event_w2(t_list *list, int x, int y)
{
	list->actions += 1;
	ft_printf("Moves:%d\n", list->actions);
	if (list->array[y - 1][x] == 'C')
	{
		list->poopoos -= 1;
		ft_printf("hey i collected poopoo!!!\npoopoos left: %d\n", list->poopoos);
		if (list->poopoos == 0)
			ft_printf("HOly sm0keRs yoU! can LEAVE now\n");
	}
	if (list->poopoos == 0 && list->array[y - 1][x] == 'E')
		terminate(list);
	list->array[y - 1][x] = 'P';
	list->array[y][x] = '0';
	modify_image(list);
	return (list);
}

t_list	*event_a2(t_list *list, int x, int y)
{
	list->actions += 1;
	ft_printf("Moves:%d\n", list->actions);
	if (list->array[y][x - 1] == 'C')
	{
		list->poopoos -= 1;
		ft_printf("hey i collected poopoo\npoopoos left: %d\n", list->poopoos);
		if (list->poopoos == 0)
			ft_printf("HOly sm0keRs yoU! can LEAVE now\n");
	}
	if (list->poopoos == 0 && list->array[y][x - 1] == 'E')
		terminate(list);
	list->array[y][x - 1] = 'P';
	list->array[y][x] = '0';
	modify_image(list);
	return (list);
}

t_list	*event_s2(t_list *list, int x, int y)
{
	list->actions += 1;
	ft_printf("Moves:%d\n", list->actions);
	if (list->array[y + 1][x] == 'C')
	{
		list->poopoos -= 1;
		ft_printf("hey i collected poopoo\npoopoos left: %d\n", list->poopoos);
		if (list->poopoos == 0)
			ft_printf("HOly sm0keRs yoU! can LEAVE now\n");
	}
	if (list->poopoos == 0 && list->array[y + 1][x] == 'E')
		terminate(list);
	list->array[y + 1][x] = 'P';
	list->array[y][x] = '0';
	modify_image(list);
	return (list);
}

t_list	*event_d2(t_list *list, int x, int y)
{
	list->actions += 1;
	ft_printf("Moves:%d\n", list->actions);
	if (list->array[y][x + 1] == 'C')
	{
		list->poopoos -= 1;
		ft_printf("hey i collected poopoo\npoopoos left: %d\n", list->poopoos);
		if (list->poopoos == 0)
			ft_printf("HOly sm0keRs yoU! can LEAVE now\n");
	}
	if (list->poopoos == 0 && list->array[y][x + 1] == 'E')
		terminate(list);
	list->array[y][x + 1] = 'P';
	list->array[y][x] = '0';
	modify_image(list);
	return (list);
}
