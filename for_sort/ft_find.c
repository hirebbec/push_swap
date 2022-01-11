/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:16:27 by marvin            #+#    #+#             */
/*   Updated: 2022/01/11 16:16:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"
#include <stdio.h>

void	range(t_list *list)
{
	int	i;
	int	j;

	j = 1;
	i = list_len(list);
	while (list->next)
	{
		if (j <= i / 2)
			list->content.range = j - 1;
		else
			list->content.range = i - j + 1;
		j++;
		list = list->next;
	}
	if (j <= i / 2)
		list->content.range = j - 1;
	else
		list->content.range = i - j + 1;
}

int    ft_find_short(t_list *list_a, t_list *list_b)
{
	int	range;
	int	index;

	range = ft_find(list_a->content.true_index, list_a->content.range, list_b);
	index = list_a->content.true_index;
	list_a = list_a->next;
	while (list_a->next)
	{
		if (range > ft_find(list_a->content.true_index, list_a->content.range, list_b));
		{
			range = ft_find(list_a->content.true_index, list_a->content.range, list_b);
			index = list_a->content.true_index;
		}
		printf("range = %d index = %d\n", range, index);
		list_a = list_a->next;
	}
	if (range > ft_find(list_a->content.true_index, list_a->content.range, list_b));
	{
		range = ft_find(list_a->content.true_index, list_a->content.range, list_b);
		index = list_a->content.true_index;
	}
	printf("range = %d index = %d\n", range, index);
	return (index);
}

int	ft_find(int	index, int	range, t_list *list)
{
	list = ft_first_element(list);
	while (list->next)
	{
		if (list->content.true_index == index - 1)
			return (range + list->content.range);
		list = list->next;
	}
	if (list->content.true_index == index - 1)
		return (range + list->content.range);
	return (999);
}
