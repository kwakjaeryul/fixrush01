/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeryul <jaeryul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:40:41 by nlee              #+#    #+#             */
/*   Updated: 2020/08/09 18:31:34 by jaeryul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

int		check_duplicated_row_col(int **map, int row, int col)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i != col && map[row][i] == map[row][col])
			return (1);
		if (i != row && map[i][col] == map[row][col])
			return (1);
		i++;
	}
	return (0);
}

int		check_either_left_or_right(int **map, int row, int **array_of_left_right, int inverse)
{
	int i;
	int k;
	int count;
	int current_height;

	i = 0;
	count = 0;
	current_height = 0;
	while (i < 4)
	{
		k = i;
		if (inverse)
			k = 3 - i;
		if (map[row][k] == 0)
			return (1);
		if (map[row][k] > current_height)
		{
			current_height = map[row][k];
			count++;
		}
		i++;
	}
	if (count == array_of_left_right[row][inverse])
		return (1);
	return (0);
}

int		check_either_up_or_down(int **map, int col, int **array_of_up_down, int inverse)
{
	int i;
	int k;
	int count;
	int current_height;

	i = 0;
	count = 0;
	current_height = 0;
	while (i < 4)
	{
		k = i;
		if (inverse)
			k = 3 - i;
		if (map[k][col] == 0)
			return (1);
		if (map[k][col] > current_height)
		{
			current_height = map[k][col];
			count++;
		}
		i++;
	}
	if (count == array_of_up_down[col][inverse])
		return (1);
	return (0);
}

int		check_row(int **map, int row, int **array_of_left_right)
{
	int is_valid;

	is_valid = check_either_left_or_right(map, row, array_of_left_right, 0)
		&& check_either_left_or_right(map, row, array_of_left_right, 1);
	return (is_valid);
}

int		check_col(int **map, int col, int **array_of_up_down)
{
	int is_valid;

	is_valid = check_either_up_or_down(map, col, array_of_up_down, 0)
		&& check_either_up_or_down(map, col, array_of_up_down, 1);
	return (is_valid);
}
