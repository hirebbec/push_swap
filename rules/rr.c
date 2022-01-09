/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:25:50 by marvin            #+#    #+#             */
/*   Updated: 2022/01/09 16:25:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	ra_rb(t_list *list)
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
}

void	rr(t_list *list_a, t_list *list_b)
{
	ra_rb(list_b);
	ra_rb(list_a);
	write(1, "rr\n", 4);
}
