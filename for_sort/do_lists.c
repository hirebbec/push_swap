/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:19:21 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 17:19:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

#include <stdio.h>

void	do_lists(t_list *list_a, t_list *list_b, int num, char **names)
{
	list_a = create_list(num, names);
	list_b = create_list(num, names);
	true_index(list_a, names);
	local_stack(list_a, names);
	keep_in_stack(list_a);
	list_a = ft_first_element(list_a);
	while (list_a->next)
	{
		printf("value = %d  tr_index = %d   loc_stc = %d  keep_in_stack = %d\n", list_a->content.value, list_a->content.true_index, list_a->content.local_stack, list_a->content.keep_in_stack);
		list_a = list_a->next;
	}
	printf("value = %d  tr_index = %d   loc_stc = %d  keep_in_stack = %d\n", list_a->content.value, list_a->content.true_index, list_a->content.local_stack, list_a->content.keep_in_stack);
	list_b = ft_first_element(list_b);
	while (list_b->next)
	{
		printf("<<%d>>\n", list_b->content.value);
		list_b = list_b->next;
	}
	printf("<<%d>>\n", list_b->content.value);
	rrr(list_a, list_b);
	list_a = ft_first_element(list_a);
	while (list_a->next)
	{
		printf("value = %d  tr_index = %d   loc_stc = %d  keep_in_stack = %d\n", list_a->content.value, list_a->content.true_index, list_a->content.local_stack, list_a->content.keep_in_stack);
		list_a = list_a->next;
	}
	printf("value = %d  tr_index = %d   loc_stc = %d  keep_in_stack = %d\n", list_a->content.value, list_a->content.true_index, list_a->content.local_stack, list_a->content.keep_in_stack);
	list_b = ft_first_element(list_b);
	while (list_b->next)
	{
		printf("<<%d>>\n", list_b->content.value);
		list_b = list_b->next;
	}
	printf("<<%d>>\n", list_b->content.value);
}

void	true_index(t_list *list, char **names)
{
	int	i;

	i = 0;
	while (list->next)
	{
		while (names[i])
		{
			if (list->content.value > ft_atoi(names[i]))
				list->content.true_index++;
			i++;
		}
		i = 0;
		list = list->next;
	}
	while (names[i])
	{
		if (list->content.value > ft_atoi(names[i]))
			list->content.true_index++;
		i++;
	}
}

void	local_stack(t_list *list, char **names)
{
	t_list	*temp;
	int		i;

	temp = list->next;
	while (list->next)
	{
		i = list->content.value;
		while (temp->next)
		{
			if (i < temp->content.value)
			{
				i = temp->content.value;
				list->content.local_stack++;
			}
			temp = temp->next;
		}
		if (i < temp->content.value)
			list->content.local_stack++;
		list = list->next;
		temp = list->next;
	}
}

void	keep_in_stack(t_list *list)
{
	t_list	*temp;

	temp = list;
	while (list->next)
	{
		if (temp->content.local_stack <= list->content.local_stack)
			temp = list;
		list = list->next;
	}
	if (temp->content.local_stack <= list->content.local_stack)
			temp = list;
	do_keep_in_stack(temp);
}

void	do_keep_in_stack(t_list *list)
{
	int	i;

	i = list->content.value;
	list->content.keep_in_stack = 1;
	list = list->next;
	while (list->next)
	{
		if (i < list->content.value)
		{
			i = list->content.value;
			list->content.keep_in_stack = 1;
		}
		list = list->next;
	}
	if (i < list->content.value)
	{
		i = list->content.value;
		list->content.keep_in_stack = 1;
	}
}
