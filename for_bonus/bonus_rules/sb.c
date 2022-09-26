/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:19 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:18:18 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../push_swap.h"

void	sb_bonus(t_list **list)
{
	t_list	*elem1;
	t_list	*elem2;

	if (list_len(*list) == 2)
		rb_bonus(list);
	else if (list_len(*list) > 1)
	{
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
}
