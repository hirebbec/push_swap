/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:51:38 by hirebbec          #+#    #+#             */
/*   Updated: 2022/01/30 14:31:44 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	sort(int direc_a, int direc_b, t_list **list_a, t_list **list_b)
{
	if (direc_a > 0 && direc_b > 0)
		rr(list_a, list_b);
	else if (direc_a < 1 && direc_b < 1)
		rrr(list_a, list_b);
	else if (direc_a > 0 && direc_b < 1)
	{
		ra(list_a);
		rrb(list_b);
	}
	else
	{
		rra(list_a);
		rb(list_b);
	}
}

void	for_sort_a(int direc_a, t_list **list_a)
{
	if (direc_a > 0)
		ra(list_a);
	else
		rra(list_a);
}

void	for_sort_b(int direc_b, t_list **list_b)
{
	if (direc_b > 0)
		rb(list_b);
	else
		rrb(list_b);
}

void	direction(t_list **list_a, t_list **list_b)
{
	ft_direction(list_a);
	ft_direction(list_b);
	ft_range(list_a, list_b);
}
