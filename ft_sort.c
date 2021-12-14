/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:36:19 by snuts             #+#    #+#             */
/*   Updated: 2021/12/14 01:21:05 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_push_swap *array, int argc)
{
	array->max_bits = 0;
	array->max_num = argc - 1;
	while ((array->max_num >> array->max_bits) != 0)
		array->max_bits++;
	array->i = 0;
	while (array->i < array->max_bits)
	{
		array->j = 0;
		array->k = 0;
		while (array->j++ < argc - 1)
		{
			array->num = array->array_A_radix[0];
			if (((array->num >> array->i) & 1) == 1)
				ft_ra(array->array_A_radix, argc);
			else
			{
				ft_pb(array->array_A_radix, array->array_B, argc);
				array->k++;
			}
		}
		while (array->k-- > 0 && array->array_B[0] != -1)
			ft_pa(array->array_A_radix, array->array_B, argc);
		array->i++;
	}
}

void	ft_sort_2(int *a)
{
	ft_sa(a);
}

void	ft_sort_3(int *a, int argc)
{
	if (a[0] > a[1] && a[0] < a[2])
		ft_sa(a);
	else if (a[0] > a[2] && a[0] < a[1])
	{
		ft_ra(a, argc);
		ft_ra(a, argc);
	}
	else if (a[0] > a[2] && a[2] > a[1])
		ft_ra(a, argc);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		ft_ra(a, argc);
		ft_sa(a);
	}
	else if (a[0] < a[2] && a[2] < a[1])
	{
		ft_sa(a);
		ft_ra(a, argc);
	}
}

void	ft_revert_5(int *a, int argc)
{
	while (a[4] != 4)
	{
		if (a[4] == 0 && a[0] == 1)
		{
			a[0] = 0;
			a[1] = 1;
			a[2] = 2;
			a[3] = 3;
			a[4] = 4;
			write(1, "rra\n", 4);
		}
		else
			ft_ra(a, argc);
	}
}

void	ft_sort_5(int *a, int *b, int argc)
{
	int	c;

	ft_pb(a, b, argc);
	ft_pb(a, b, argc);
	ft_sort_3(a, argc);
	c = 3;
	while (c != 5)
	{
		if ((a[0] > b[0] && (a[0] - b[0] == 1))
			|| (a[0] == 0 && b[0] == 4))
		{
			ft_pa(a, b, argc);
			c++;
		}
		else if (((a[0] < b[0]) && (b[0] - a[0] == 1))
			|| (a[0] == 4 && b[0] == 0))
		{
			ft_ra(a, argc);
			ft_pa(a, b, argc);
			c++;
		}
		else
			ft_ra(a, argc);
	}
	ft_revert_5(a, argc);
}
