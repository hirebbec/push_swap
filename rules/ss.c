/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:29:02 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:18:12 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	sss(t_list **list)
{
	t_list	*elem1;
	t_list	*elem2;

	(*list) = ft_first_element((*list));
	elem1 = (*list);
	elem2 = (*list)->next;
	(*list) = (*list)->next->next;
	elem1->next = (*list);
	elem1->previos = elem2;
	elem2->next = elem1;
	elem2->previos = NULL;
	(*list)->previos = elem1;
}

void	ss(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) > 1)
		sss(list_a);
	if (list_len(*list_a) > 1)
		sss(list_b);
	write(1, "ss\n", 3);
}
