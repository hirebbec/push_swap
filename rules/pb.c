/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:34:59 by marvin            #+#    #+#             */
/*   Updated: 2022/02/09 01:21:15 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	pb_first_case(t_list **list_a, t_list **list_b)
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

void	pb_second_case(t_list **list_a, t_list **list_b)
{	
	t_list	*head;

	(*list_a) = ft_first_element((*list_a));
	if (list_len(*list_b) == 0)
	{
		(*list_b) = (*list_a);
		(*list_a) = NULL;
	}
	else
	{
		(*list_b) = ft_first_element((*list_b));
		head = (*list_a);
		(*list_a) = NULL;
		head->next = (*list_b);
		(*list_b)->previos = head;
	}
}

void	pb(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) > 1)
		pb_first_case(list_a, list_b);
	else if (list_len(*list_a) == 1)
		pb_second_case(list_a, list_b);
	write(1, "pb\n", 3);
}
