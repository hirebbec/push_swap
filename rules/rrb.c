/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:44:07 by marvin            #+#    #+#             */
/*   Updated: 2022/01/09 16:44:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	rrb(t_list *list)
{
	t_list	*temp;

	list = ft_last_element(list);
	temp = ft_copy_element(list);
	list = list->previos;
	list->next = NULL;
	free(list->next);
	list = ft_first_element(list);
	temp->next = list;
	list->previos = temp;
	write(1, "rrb\n", 5);
}
