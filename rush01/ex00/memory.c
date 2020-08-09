/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeryul <jaeryul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:42:15 by nlee              #+#    #+#             */
/*   Updated: 2020/08/09 18:30:55 by jaeryul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "main.h"

void	assign_memory(int **map, int **array_of_left_right, int **array_of_up_down)
{
	int i;

	i = 0;
	while (i < 4)
	{
		map[i] = (int*)malloc(sizeof(int) * 4);
		array_of_left_right[i] = (int*)malloc(sizeof(int) * 2);
		array_of_up_down[i] = (int*)malloc(sizeof(int) * 2);
		i++;
	}
}

void	free_memory(int **map, int **array_of_left_right, int **array_of_up_down)
{
	int i;

	i = 0;
	while (i < 4)
	{
		free(map[i]);
		free(array_of_left_right[i]);
		free(array_of_up_down[i]);
		i++;
	}
	free(map);
	free(array_of_left_right);
	free(array_of_up_down);
}
