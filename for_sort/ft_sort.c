/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:37:05 by hirebbec          #+#    #+#             */
/*   Updated: 2022/01/30 21:20:56 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	ft_sort(int i, t_list **list_a, t_list **list_b)
{
	int	m[4];

	(*list_b) = ft_find_element((*list_b), i);
	(*list_a) = ft_find_element((*list_a), i + ft_find_a(*list_a, i, *list_b));
	m[0] = (*list_a)->content.range;
	m[1] = (*list_b)->content.range;
	m[2] = (*list_a)->content.direction;
	m[3] = (*list_b)->content.direction;
	while (m[0] > 0 || m[1] > 0)
	{
		if (m[0] > 0 && m[1] > 0)
		{
			sort(m[2], m[3], list_a, list_b);
			m[0]--;
			m[1]--;
		}
		else if (m[0]-- > 0)
			for_sort_a(m[2], list_a);
		else if (m[1]-- > 0)
			for_sort_b(m[3], list_b);
	}
	(*list_b) = ft_first_element((*list_b));
	pa(list_a, list_b);
}

t_list	*ft_find_element(t_list *list, int index)
{
	list = ft_first_element(list);
	while (list)
	{
		if (list->content.true_index == index)
			return (list);
		list = list->next;
	}
	return (ft_first_element(list));
}

void	cheack_r(t_list *list_a)
{
	int	i;

	list_a = ft_first_element(list_a);
	i = list_a->content.value;
	list_a = list_a->next;
	while (list_a->next)
	{
		if (i < list_a->content.value)
			return ;
		i = list_a->content.value;
		list_a = list_a->next;
	}
	if (i < list_a->content.value)
		return ;
	list_a = ft_first_element(list_a);
	while (list_a->content.true_index-- != 1)
		write(1, "rra\npb\n", 7);
	list_a = list_a->next;
	while (list_a->content.true_index-- != 0)
		write(1, "pa\n", 3);
	ft_free(list_a);
	exit(0);
}

int	ft_max(t_list *list)
{
	int	i;

	if (!list)
		return (100);
	list = ft_first_element(list);
	i = list->content.value;
	while (list->next)
	{
		if (i < list->content.value)
			i = list->content.value;
		list = list->next;
	}
	if (i < list->content.value)
			i = list->content.value;
	return (i);
}

int	ft_find_a(t_list *list_a, int index, t_list *list_b)
{
	int	i;

	i = 1;
	while (index + i < ft_max(list_a) + ft_max(list_b))
	{
		list_a = ft_first_element(list_a);
		while (list_a->next)
		{
			if (list_a->content.true_index == index + i)
				return (i);
			list_a = list_a->next;
		}
		if (list_a->content.true_index == index + i)
			return (i);
		i++;
	}
	return (1 - index);
}
