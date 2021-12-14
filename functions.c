/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:07:42 by snuts             #+#    #+#             */
/*   Updated: 2021/12/14 01:37:58 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *arr_a)
{
	int	c;

	c = arr_a[0];
	arr_a[0] = arr_a[1];
	arr_a[1] = c;
	write(1, "sa\n", 3);
}

void	ft_ra(int *arr_a, int argc)
{
	int	i;
	int	c;
	int	x;

	i = 0;
	x = 0;
	while (arr_a[i] != -1 && i < argc - 1)
	{
		x++;
		i++;
	}
	i = 0;
	while (i < x - 1 && i < argc - 1 && i < argc - 2)
	{
		c = arr_a[i];
		arr_a[i] = arr_a[i + 1];
		arr_a[i + 1] = c;
		c = 0;
		i++;
	}
	write(1, "ra\n", 3);
}

void	ft_pb(int *a, int *b, int argc)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (b[i] != -1 && i < argc - 1)
		i++;
	c = 0;
	while (a[c] != -1 && c < argc - 1)
		c++;
	j = i + 1;
	while (j-- > 0)
		b[j] = b[j - 1];
	b[0] = a[0];
	i = 0;
	while (i < argc - 1)
	{
		if (i < c - 1)
			a[i] = a[i + 1];
		else
			a[i] = -1;
		i++;
	}
	write(1, "pb\n", 3);
}

void	ft_pa(int *a, int *b, int argc)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (a[i] != -1 && i < argc - 1)
		i++;
	c = 0;
	while (b[c] != -1 && c < argc - 1)
		c++;
	j = i + 1;
	while (j-- > 0)
		a[j] = a[j - 1];
	a[0] = b[0];
	i = 0;
	while (i < argc - 1)
	{
		if (i < c - 1)
			b[i] = b[i + 1];
		else
			b[i] = -1;
		i++;
	}
	write(1, "pa\n", 3);
}
