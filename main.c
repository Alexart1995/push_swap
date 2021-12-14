/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:21:11 by snuts             #+#    #+#             */
/*   Updated: 2021/12/14 14:59:52 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_push_swap array)
{
	free(array.array_A_radix);
	free(array.array_A_sorted);
	free(array.array_A);
	free(array.array_B);
}

int	ft_fill_array_1(t_push_swap *array, int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		array->array_B[i] = -1;
		array->array_A_radix[i] = -1;
		i++;
	}
	j = 1;
	i = 0;
	while (i < argc - 1)
	{
		if (ft_checker(argv[j]) == 1)
		{
			write (1, "Error\n", 6);
			exit (0);
		}
		array->array_A_sorted[i] = ft_atoi(argv[j]);
		array->array_A[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	return (0);
}

void	ft_sort_main(t_push_swap array, int argc)
{
	if (argc - 1 == 2)
		ft_sort_2(array.array_A_radix);
	else if (argc - 1 == 3)
		ft_sort_3(array.array_A_radix, argc);
	else if (argc - 1 == 4)
		ft_sort_4(array.array_A_radix, array.array_B, argc);
	else if (argc - 1 == 5)
		ft_sort_5(array.array_A_radix, array.array_B, argc);
	else
		ft_sort(&array, argc);
}

int	main(int argc, char **argv)
{
	t_push_swap	array;
	int			i;

	array.array_A = malloc(sizeof(int) * (argc - 1));
	array.array_A_sorted = malloc(sizeof(int) * (argc - 1));
	array.array_A_radix = malloc(sizeof(int) * (argc - 1));
	array.array_B = malloc(sizeof(int) * (argc - 1));
	i = ft_fill_array_1(&array, argc, argv);
	if (ft_check2(array.array_A, argc) == 1 || i == 1)
	{
		write (1, "Error\n", 6);
		exit(0);
	}
	ft_revert(array.array_A, array.array_A_sorted, array.array_A_radix, argc);
	if (argc <= 2 || ft_sorted(array.array_A, array.array_A_sorted, argc) == 0)
		exit(0);
	ft_sort_main(array, argc);
	ft_free(array);
	return (0);
}
