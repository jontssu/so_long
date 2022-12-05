/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:29:48 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 21:17:57 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // deleteeeeeeeeeee
#include "so_long.h"

int	ft_putchar(int key, char **param)
{
	printf("%s\n", param[0]);
	printf("%d\n", key);
	return (0);
}

/*int	deal_key(int key, char **param)
{
	if (key == 0)
		event_a(param);
	if (key == 1)
		event_s(param);
	if (key == 2)
		event_d(param);
	if (key == 13)
		event_w(param);
	return (0);
}*/

/*void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->length + x * (data->bpp / 8));
	*(unsigned int *)dst = color;
}*/

int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	*line;
	int		map_width;
	int		map_height;
	char	**array;

	map_width = 0;
	map_height = 0;
	line = read_file("map.ber");
	map_width = calculate_width(line);
	map_height = calculate_height(line);
	array = convert_to_array(line, map_width, map_height);
	mlx_ptr = mlx_init(); //returns null if fails!
	win_ptr = mlx_new_window(mlx_ptr, (map_width * 23), (map_height * 23), "Jon's awesome game");
	modify_image(mlx_ptr, win_ptr, line);
//	mlx_key_hook(win_ptr, deal_key, array);
	mlx_key_hook(win_ptr, ft_putchar, array);
	mlx_loop(mlx_ptr);
	return (0);
}
