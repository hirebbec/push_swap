/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:12:00 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 21:12:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	sa(t_list *list)
{
	t_list	*temp;

	list = ft_first_element(list);
	temp = list;
	list = list->next;
	list->previos = NULL;
	temp->previos = list;
	temp->next = list->next;
	list->next = temp;
	write(1, "sa\n", 4);
}
