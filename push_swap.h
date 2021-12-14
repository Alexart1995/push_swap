/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:25:36 by snuts             #+#    #+#             */
/*   Updated: 2021/12/14 13:59:03 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_push_swap
{
	int	*array_A;
	int	*array_B;
	int	*array_A_sorted;
	int	*array_A_radix;
	int	num;
	int	max_bits;
	int	max_num;
	int	k;
	int	i;
	int	j;
}		t_push_swap;

int		min_max(int num, int min, const char *str);
int		ft_atoi(char *str);
int		ft_is_int(char *str);
void	ft_sa(int *arr_a);
void	ft_revert(int *a, int *a_s, int *a_final, int argc);
void	ft_bubble(int *a, int argc);
void	ft_ra(int *arr_a, int argc);
void	ft_pb(int *a, int *b, int argc);
void	ft_pa(int *a, int *b, int argc);
void	ft_sort(t_push_swap *array, int argc);
int		ft_sorted(int *a, int *a_s, int argc);
void	ft_sort_2(int *a);
void	ft_sort_3(int *a, int argc);
void	ft_sort_4(int *a, int *b, int argc);
void	ft_sort_5(int *a, int *b, int argc);
int		ft_check2(int *a, int argc);
int		ft_sorted(int *a, int *a_s, int argc);
int		ft_maxint(int *a, int argc);
int		ft_repeat(int *a, int argc);
int		ft_checker(char *str);
void	ft_revert_5(int *a, int argc);

#endif