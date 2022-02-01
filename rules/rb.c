/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:23:22 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:14:22 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	rb(t_list **list)
{
	t_list	*temp;
	t_list	*head;

	if (list_len(*list) > 1)
	{
		(*list) = ft_first_element((*list));
		head = (*list);
		*list = (*list)->next;
		temp = ft_last_element(head);
		temp->next = head;
		head->previos = temp;
		head->next = NULL;
		(*list)->previos = NULL;
	}
	write(1, "rb\n", 3);
}
