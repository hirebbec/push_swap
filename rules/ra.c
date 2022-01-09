/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:59:05 by marvin            #+#    #+#             */
/*   Updated: 2022/01/09 15:59:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	ra(t_list *list)
{
	t_list	*temp;

	list = ft_first_element(list);
	temp = ft_copy_element(list);
	list = list->next;
	list->previos = NULL;
	free(list->previos);
	list = ft_last_element(list);
	temp->previos = list;
	list->next = temp;
	write(1, "ra\n", 4);
}
