/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:09:08 by hirebbec          #+#    #+#             */
/*   Updated: 2022/01/30 15:54:47 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	small_stack(char **names)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = create_list(6, names);
	list_b = new_element(1);
	list_b->content.keep_in_stack = -1;
	cheack(list_a);
	min_push(&list_a, &list_b);
	min_push(&list_a, &list_b);
	ft_sort_three(&list_a);
	write(1, "pa\npa\n", 6);
	ft_free(list_a);
	ft_free(list_b);
}

void	min_push(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	ft_direction(list_a);
	ft_range(list_a, list_a);
	(*list_a) = ft_first_element(*list_a);
	tmp = (*list_a);
	while ((*list_a)->next)
	{
		if ((*list_a)->content.value < tmp->content.value)
			tmp = (*list_a);
		(*list_a) = (*list_a)->next;
	}
	if ((*list_a)->content.value < tmp->content.value)
			tmp = (*list_a);
	(*list_a) = ft_first_element((*list_a));
	while (tmp->content.range--)
	{
		if (tmp->content.direction == 1)
			ra(list_a);
		else
			rra(list_a);
	}
	pb(list_a, list_b);
}

void	show(t_list *list)
{
	if (list == NULL)
		printf("\n\nEMPTY\n\n");
	else
	{
		list = ft_first_element(list);
		printf("\n\n\n");
		while (list)
		{
			printf("value = %d\n", list->content.value);
			list = list->next;
		}
	}
}

void	ft_sort_three(t_list **list)
{
	int	m[3];

	(*list) = ft_first_element((*list));
	m[0] = (*list)->content.value;
	m[1] = (*list)->next->content.value;
	m[2] = (*list)->next->next->content.value;
	if (m[0] < m[1] && m[0] < m[2] && m[1] < m[2])
		return ;
	else if (m[0] > m[1] && m[0] > m[2] && m[1] > m[2])
		write(1, "sa\nrra\n", 7);
	else if (m[0] < m[1] && m[0] < m[2] && m[1] > m[2])
		write(1, "sa\nra\n", 6);
	else if (m[0] > m[1] && m[0] < m[2] && m[1] < m[2])
		write(1, "sa\n", 3);
	else if (m[0] < m[1] && m[0] > m[2] && m[1] > m[2])
		write(1, "rra\n", 4);
	else if (m[0] > m[1] && m[0] > m[2] && m[1] < m[2])
		write(1, "ra\n", 3);
}
