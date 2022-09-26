/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:43 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 17:20:29 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../push_swap.h"

void	pa_case_one(t_list **list_a, t_list **list_b)
{
	t_list	*head;

	(*list_a) = ft_first_element((*list_a));
	if (list_len(*list_b) == 0)
	{
		(*list_b) = (*list_a);
		(*list_a) = (*list_a)->next;
		(*list_b)->next = NULL;
		(*list_a)->previos = NULL;
	}
	else
	{
		(*list_b) = ft_first_element((*list_b));
		head = (*list_a);
		(*list_a) = (*list_a)->next;
		(*list_a)->previos = NULL;
		head->next = (*list_b);
		(*list_b)->previos = head;
	}
}

void	pa_case_two(t_list **list_a, t_list **list_b)
{
	t_list	*head;

	(*list_a) = ft_first_element((*list_a));
	if (list_len(*list_b) == 0)
	{
		(*list_b) = (*list_a);
		(*list_a) = (*list_a)->next;
	}
	else
	{
		(*list_b) = ft_first_element((*list_b));
		head = (*list_a);
		(*list_a) = (*list_a)->next;
		head->next = (*list_b);
		(*list_b)->previos = head;
	}
}

void	pa_bonus(t_list **list_b, t_list **list_a)
{
	if (list_len(*list_a) > 1)
		pa_case_one(list_a, list_b);
	else if (list_len(*list_a) == 1)
		pa_case_two(list_a, list_b);
}
