/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:29:48 by jole              #+#    #+#             */
/*   Updated: 2022/12/08 01:37:11 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // deleteeeeeeeeeee
#include "so_long.h"

int	deal_key(int key, t_list *list)
{
	int	x;

	x = 0;
	if (key == 0)
		event_a(list, x);
	if (key == 1)
		event_s(list, x);
	if (key == 2)
		event_d(list, x);
	if (key == 13)
		event_w(list, x);
	if (key == 53)
	{
		mlx_destroy_window(list->mlx_ptr, list->win_ptr);
		exit(0);
	}
	return (0);
}

int	closee(int keycode, t_list *list)
{
	printf("%d\n", keycode);
	return (0);
}

int	main(void)
{
	t_list	list;

	list.poopoos = 0;
	list.exits = 0;
	list.starts = 0;
	list.actions = 0;
	list.line = read_file("map.ber");
	list.col = calculate_width(list.line);
	list.row = calculate_height(list.line);
	list.array = convert_to_array(list);
	list.array2 = convert_to_array(list);
	list = check_valid_map(list);
	if (list.map_is == 0)
		exit(0);
	list.mlx_ptr = mlx_init(); //returns null if fails!
	list.win_ptr = mlx_new_window(list.mlx_ptr, list.col * 23, list.row * 23, "poop sucker");
	modify_image(list);
	mlx_key_hook(list.win_ptr, deal_key, (void *)&list);
	mlx_mouse_hook(list.win_ptr, closee, (void *)&list);
//	mlx_hook(list.win_ptr, 2, 1L<<0, closee, &list);
	mlx_loop(list.mlx_ptr);
	return (0);
}
