/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:52:17 by snuts             #+#    #+#             */
/*   Updated: 2021/12/14 01:41:43 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_revert(int *a, int *a_s, int *a_final, int argc)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	ft_bubble(a_s, argc);
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (a_s[i] == a[j])
			{
				a_final[j] = count;
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_bubble(int *a, int argc)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 2 - i)
		{
			if (a[j] > a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_4(int *a, int *b, int argc)
{
	int	c;

	ft_pb(a, b, argc);
	ft_sort_3(a, argc);
	c = 3;
	while (c != 4)
	{
		if ((a[0] > b[0] && (a[0] - b[0] == 1))
			|| (a[0] == 0 && b[0] == 3))
		{
			ft_pa(a, b, argc);
			c++;
		}
		else if (((a[0] < b[0]) && (b[0] - a[0] == 1))
			|| (a[0] == 3 && b[0] == 0))
		{
			ft_ra(a, argc);
			ft_pa(a, b, argc);
			c++;
		}
		else
			ft_ra(a, argc);
	}
	while (a[3] != 3)
		ft_ra(a, argc);
}
