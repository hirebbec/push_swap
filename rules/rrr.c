/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:45:57 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:18:29 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	rra_rrb(t_list **list)
{
	t_list	*temp;
	t_list	*head;

	(*list) = ft_first_element((*list));
	head = (*list);
	temp = ft_last_element((*list));
	(*list) = temp->previos;
	(*list)->next = NULL;
	temp->next = head;
	head->previos = temp;
	temp->previos = NULL;
}

void	rrr(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_b) > 1)
		rra_rrb(list_b);
	if (list_len(*list_b) > 1)
		rra_rrb(list_a);
	write(1, "rrr\n", 4);
}
