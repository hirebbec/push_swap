/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:31:54 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:16:27 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	rra(t_list **list)
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
	write(1, "rra\n", 4);
}
