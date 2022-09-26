/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:44:07 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:16:35 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../push_swap.h"

void	rrb_bonus(t_list **list)
{
	t_list	*temp;
	t_list	*head;

	if (list_len(*list) > 1)
	{
		(*list) = ft_first_element((*list));
		head = (*list);
		temp = ft_last_element((*list));
		(*list) = temp->previos;
		(*list)->next = NULL;
		temp->next = head;
		head->previos = temp;
		temp->previos = NULL;
	}
}
