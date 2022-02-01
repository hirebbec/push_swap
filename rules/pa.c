/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:43 by marvin            #+#    #+#             */
/*   Updated: 2022/01/30 21:08:04 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	pa(t_list **list_b, t_list **list_a)
{
	t_list	*head;
	
	if (list_len(*list_a) > 1)
	{	
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
	if (list_len(*list_a) == 1)
	{	
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
	write(1, "pa\n", 3);
}
