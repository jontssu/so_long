/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 06:30:45 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 18:53:17 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <mlx.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void	*mlx;
	void	*win;
	char	*line;
	char	**array;
	char	**array2;
	void	*wall;
	void	*tile;
	void	*poop;
	void	*player;
	void	*exit;
	int		col;
	int		row;
	int		on_exit;
	int		printx;
	int		printy;
	int		pcol;
	int		prow;
	int		x;
	int		y;
	int		xcount;
	int		ycount;
	int		pixel_x;
	int		pixel_y;
	int		actions;
	int		poopoos;
	int		poopoo_check;
	int		exits;
	int		starts;
	int		emptys;
}			t_list;

int		ft_printf(const char *s, ...);
int		check_valid_file_name(char *str);
void	initialize_variables(t_list *list);
char	*read_file(char *file);
void	calculate_width(t_list *list);
void	calculate_height(t_list *list);
void	check_rectangularity(t_list *list);
char	**convert_to_array(t_list *list);
char	**convert_to_array2(t_list *list);
void	set_argument(t_list *list);
void	check_valid_map(t_list *list);
void	initialize_window(t_list *list);
t_list	*check_wall_top(t_list *list);
t_list	*check_wall_left(t_list *list);
t_list	*check_wall_bottom(t_list *list);
t_list	*check_wall_right(t_list *list);
t_list	*check_valid_chars(t_list *list);
t_list	*check_valid_chars2(t_list *list, int x, int y);
t_list	*check_valid_chars3(t_list *list, int x, int y);
t_list	*check_valid_route(t_list *list, int x, int y);
t_list	*fill_the_route(t_list *list, int x, int y);
t_list	*fill_the_route2(t_list *list, int x, int y);
t_list	*check_for_exit(t_list *list);
t_list	*check_for_collectibles(t_list *list);
void	terminate(t_list *list);
int		deal_key(int key, t_list *list);
int		close_window(t_list *list);
void	modify_image(t_list *list);
void	modify_image_variables(t_list *list);
int		modify_image2(t_list *list, int object);
int		put_wall(t_list *list, int pixel_x, int pixel_y);
int		put_tile(t_list *list, int pixel_x, int pixel_y);
int		put_collectable(t_list *list, int pixel_x, int pixel_y);
int		put_player(t_list *list, int pixel_x, int pixel_y);
int		put_exit(t_list *list, int pixel_x, int pixel_y);
void	event_w(t_list *list, int x);
t_list	*event_w2(t_list *list, int x, int y);
void	event_a(t_list *list, int x);
t_list	*event_a2(t_list *list, int x, int y);
void	event_s(t_list *list, int x);
t_list	*event_s2(t_list *list, int x, int y);
void	event_d(t_list *list, int x);
t_list	*event_d2(t_list *list, int x, int y);

#endif
