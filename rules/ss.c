/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:29:02 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 21:29:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	sss(t_list *list)
{
	t_list	*temp;

	list = ft_first_element(list);
	temp = list;
	list = list->next;
	list->previos = NULL;
	temp->previos = list;
	temp->next = list->next;
	list->next = temp;
}

void	ss(t_list *list_a, t_list *list_b)
{
	sss(list_a);
	sss(list_b);
	write(1, "ss\n", 4);
}
