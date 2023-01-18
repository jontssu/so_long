# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jole <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 04:47:47 by jole              #+#    #+#              #
#    Updated: 2023/01/18 18:50:18 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

LIBFT = libft.a

SRC = check_valid_file_name.c check_valid_route.c check_valid_chars.c check_valid_map.c realize_event2.c realize_event.c convert_to_array.c put_argument.c modify_image.c calculate_width.c read_file.c check_rectangularity.c so_long.c set_argument.c initialize_window.c initialize_variables.c ft_printf.c 

OSRC = $(SRC:%.c=%.o)

WWW = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C ./libft

$(NAME): $(OSRC)
	cc $(WWW) $(OSRC) -L ./libft/ -lft -lmlx -framework OpenGL -framework Appkit -o $(NAME)

clean: 
	rm -f $(OSRC)
	make clean -C ./libft

fclean: clean
	rm -f $(NAME)
	rm -rf ./libft/$(LIBFT)

%.o: %.c
	cc $(WWW) -c -o $@ $^

re: fclean all

test:
	cc -I /usr/local/include check_valid_file_name.c check_valid_route.c check_valid_chars.c check_valid_map.c realize_event2.c realize_event.c convert_to_array.c put_argument.c modify_image.c calculate_height.c calculate_width.c read_file.c check_rectangularity.c so_long.c set_argument.c initialize_window.c initialize_variables.c terminate.c ft_printf.c -L /usr/local/lib/ -lmlx -framework OpenGL -framework Appkit -g -I ft_printf.h && ./a.out maps/map.ber
