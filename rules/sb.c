/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:19 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 21:24:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	sb(t_list *list)
{
	t_list	*temp;

	list = ft_first_element(list);
	temp = list;
	list = list->next;
	list->previos = NULL;
	temp->previos = list;
	temp->next = list->next;
	list->next = temp;
	write(1, "sb\n", 4);
}
