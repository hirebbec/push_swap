/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:43 by marvin            #+#    #+#             */
/*   Updated: 2022/01/09 15:55:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	pa(t_list *list_a, t_list *list_b)
{
	t_list	*temp;

	list_b = ft_first_element(list_b);
	list_a = ft_first_element(list_a);
	temp = ft_copy_element(list_b);
	temp->next = list_a;
	list_a->previos = temp;
	list_b = list_b->next;
	free(list_b->previos);
	list_b->previos = NULL;
	write(1, "pa\n", 4);
}
