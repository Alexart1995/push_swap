/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:05:49 by snuts             #+#    #+#             */
/*   Updated: 2021/12/14 02:26:30 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
			return (1);
		i++;
	}
	return (0);
}

int	ft_check2(int *a, int argc)
{
	if (ft_maxint(a, argc) == 1)
		return (1);
	else if (ft_repeat(a, argc) == 1)
		return (1);
	else
		return (0);
}

int	ft_sorted(int *a, int *a_s, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (a[i] != a_s[i])
			return (1);
		else if (a[i] == a_s[i])
			i++;
	}
	return (0);
}

int	ft_maxint(int *a, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (a[i] > INT_MAX)
			return (1);
		else if (a[i] < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_repeat(int *a, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (a[i] == a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
