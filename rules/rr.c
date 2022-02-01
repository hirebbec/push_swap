/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:25:50 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:15:50 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	ra_rb(t_list **list)
{
	t_list	*temp;
	t_list	*head;

	(*list) = ft_first_element((*list));
	head = (*list);
	*list = (*list)->next;
	temp = ft_last_element(head);
	temp->next = head;
	head->previos = temp;
	head->next = NULL;
	(*list)->previos = NULL;
}

void	rr(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_b) > 1)
		ra_rb(list_b);
	if (list_len(*list_a) > 1)
		ra_rb(list_a);
	write(1, "rr\n", 3);
}
