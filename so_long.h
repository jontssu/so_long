/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 06:30:45 by jole              #+#    #+#             */
/*   Updated: 2022/12/08 01:23:24 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <mlx.h>
# include <fcntl.h>
# include <unistd.h> // tarviiks ?
# include <stdlib.h>


typedef struct	s_list
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	*line;
	char	**array;
	char	**array2;
	int		col;
	int		row;
	int		actions;
	int		poopoos;
	int		exits;
	int		starts;
	int		map_is;
}			t_list;

char	*read_file(char *file);
int		calculate_width(char *line);
int		calculate_height(char *line);
char	**convert_to_array(t_list list);
t_list	check_valid_map(t_list list);
t_list	check_wall_top(t_list list);
t_list	check_wall_left(t_list list);
t_list	check_wall_bottom(t_list list);
t_list	check_wall_right(t_list list);
t_list	check_valid_chars(t_list list);
t_list	check_rectangle(t_list list);
int		deal_key(int key, t_list *list);
int		click_mouse(int click, t_list *list);
void	modify_image(t_list list);
int		modify_image2(t_list list, int pixel_x, int pixel_y, int object);
int		put_wall(t_list list, int pixel_x, int pixel_y);
int		put_tile(t_list list, int pixel_x, int pixel_y);
int		put_collectable(t_list list, int pixel_x, int pixel_y);
int		put_player(t_list list, int pixel_x, int pixel_y);
int		put_exit(t_list list, int pixel_x, int pixel_y);
void	event_w(t_list *list, int x);
void	event_a(t_list *list, int x);
void	event_s(t_list *list, int x);
void	event_d(t_list *list, int x);

#endif
