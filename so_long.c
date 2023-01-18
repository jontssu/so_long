/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:29:48 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 14:59:19 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	terminate(t_list *list)
{
	int	rows;

	rows = list->row;
	while (rows--)
		free(list->array[rows]);
	rows = list->row;
	while (rows--)
		free(list->array2[rows]);
	free(list->array);
	free(list->array2);
	free(list->line);
	mlx_destroy_image(list->mlx, list->wall);
	mlx_destroy_image(list->mlx, list->tile);
	mlx_destroy_image(list->mlx, list->poop);
	mlx_destroy_image(list->mlx, list->player);
	mlx_destroy_image(list->mlx, list->exit);
	mlx_destroy_window(list->mlx, list->win);
	ft_printf("terminating\n");
	exit(0);
}

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
		terminate(list);
	return (0);
}

int	close_window(t_list *list)
{
	terminate((t_list *)list);
	return (0);
}

//terminate

int	main(int argc, char **argv)
{
	t_list	list;

	argc += 0;
	check_valid_file_name(argv[1]);
	initialize_variables(&list);
	list.line = read_file(argv[1]);
	list.col = calculate_width(list.line);
	list.row = calculate_height(list.line);
	list.array = convert_to_array(&list);
	list.array2 = convert_to_array2(&list);
	list.mlx = mlx_init();
	if (!list.mlx)
		return (0);
	set_argument(&list);
	initialize_window(&list);
	check_rectangularity(&list);
	check_valid_map(&list);
	modify_image(&list);
	mlx_key_hook(list.win, deal_key, (void *)&list);
	mlx_hook(list.win, 17, 1L << 2, close_window, (void *)&list);
	mlx_loop(list.mlx);
	return (0);
}
