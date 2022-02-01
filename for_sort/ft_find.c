/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:16:27 by marvin            #+#    #+#             */
/*   Updated: 2022/01/25 18:41:49 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	range(t_list **list)
{
	int	i;
	int	j;

	j = 1;
	i = list_len(*list);
	if (i == 1)
	{
		(*list)->content.range = 0;
		return ;
	}
	(*list) = ft_first_element((*list));
	while ((*list)->next)
	{
		if (j <= i / 2)
			(*list)->content.range = j - 1;
		else
			(*list)->content.range = i - j + 1;
		j++;
		(*list) = (*list)->next;
	}
	if (j <= i / 2)
		(*list)->content.range = j - 1;
	else
		(*list)->content.range = i - j + 1;
}

int	ft_find_short(t_list *list_a, t_list *list_b)
{
	int	r;
	int	index;

	list_a = ft_first_element(list_a);
	list_b = ft_first_element(list_b);
	r = f_f(list_b->content.true_index, list_b->content.range, list_a);
	index = list_b->content.true_index;
	list_a = list_a->next;
	while (list_b->next)
	{
		if (r > f_f(list_b->content.true_index, list_b->content.range, list_a))
		{
			r = f_f(list_b->content.true_index, list_b->content.range, list_a);
			index = list_b->content.true_index;
		}
		list_b = list_b->next;
	}
	if (r > f_f(list_b->content.true_index, list_b->content.range, list_a))
	{
		r = f_f(list_b->content.true_index, list_b->content.range, list_a);
		index = list_b->content.true_index;
	}
	return (index);
}

int	f_f(int index, int range, t_list *list)
{
	int	i;

	i = 1;
	while (index + i < 1000)
	{
		list = ft_first_element(list);
		while (list->next)
		{
			if (list->content.true_index == index + i)
				return (range + list->content.range);
			list = list->next;
		}
		if (list->content.true_index == index + i)
			return (range + list->content.range);
		i++;
	}
	return (999);
}

void	ft_last(t_list **list_a, t_list **list_b)
{
	int	rang;
	int	direc;

	(*list_a) = ft_first_element((*list_a));
	ft_direction(list_a);
	range(list_a);
	(*list_a) = ft_first_element((*list_a));
	while ((*list_a)->content.true_index != (*list_b)->content.true_index + 1 \
		&& (*list_a)->next)
		(*list_a) = (*list_a)->next;
	if ((*list_a)->content.true_index != (*list_b)->content.true_index + 1)
	{
		(*list_a) = ft_first_element((*list_a));
		while ((*list_a)->content.true_index != 1)
			(*list_a) = (*list_a)->next;
	}
	rang = (*list_a)->content.range;
	direc = (*list_a)->content.direction;
	while (rang-- != 0)
		ft_if_last(list_a, direc);
	(*list_a) = ft_first_element(*list_a);
	(*list_b)->previos = NULL;
	(*list_b)->next = (*list_a);
	(*list_a)->previos = (*list_b);
	write(1, "pa\n", 3);
}

void	ft_if_last(t_list **list, int direct)
{
	if (direct > 0)
		ra(list);
	else
		rra(list);
}
