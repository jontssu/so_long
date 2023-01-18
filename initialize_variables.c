/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_variables.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:51:26 by jole              #+#    #+#             */
/*   Updated: 2023/01/17 13:39:20 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialize_variables(t_list *list)
{
	list->actions = 0;
	list->poopoos = 0;
	list->poopoo_check = 0;
	list->exits = 0;
	list->starts = 0;
}
