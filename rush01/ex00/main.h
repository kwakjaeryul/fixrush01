void	assign_memory(int **map, int **array_of_left_right, int **array_of_up_down);
void	free_memory(int **map, int **array_of_left_right, int **array_of_up_down);
int		check_argument(int argc, char *argv[]);
void	put_into_arrays(char *argv[], int **array_of_left_right, int **array_of_up_down);
void	init_map_to_zero(int **map);
void	print_map(int **map);
int		solve_with_dfs(int **map, int **array_of_left_right, int **array_of_up_down);
