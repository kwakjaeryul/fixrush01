/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeryul <jaeryul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:41:10 by nlee              #+#    #+#             */
/*   Updated: 2020/08/09 18:31:19 by jaeryul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int		main(int argc, char *argv[])
{
	int	**map;
	int	**array_of_left_right;
	int	**array_of_up_down;

	map = (int**)malloc(sizeof(int*) * 4);
	array_of_left_right = (int**)malloc(sizeof(int*) * 4);
	array_of_up_down = (int**)malloc(sizeof(int*) * 4);
	assign_memory(map, array_of_left_right, array_of_up_down);
	if (!check_argument(argc, argv))
	{
		write(1, "Error\n", 6);
		free_memory(map, array_of_left_right, array_of_up_down);
		return (1);
	}
	put_into_arrays(argv, array_of_left_right, array_of_up_down);
	init_map_to_zero(map);
	if (solve_with_dfs(map, array_of_left_right, array_of_up_down))
		print_map(map);
	else
		write(1, "Error\n", 6);
	free_memory(map, array_of_left_right, array_of_up_down);
	return (0);
}
