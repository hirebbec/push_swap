/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:38:25 by marvin            #+#    #+#             */
/*   Updated: 2022/01/09 20:38:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"
#include <stdio.h>

int	ft_cheack(t_list *list)
{
	while (list->next)
	{
		if (list->content.keep_in_stack == 0)
			return (1);
		list = list->next;
	}
	if (list->content.keep_in_stack == 0)
		return (1);
	return (0);
}

t_list	*ft_create_list_b(t_list *list_a, t_list *list_b)
{
	while (ft_cheack(ft_first_element(list_a)))
	{
		if (list_a->content.keep_in_stack == 0)
		{
			list_a = ft_first_element(list_a);
			pb(list_a, list_b);
			list_a = list_a->next;
		}
		else if (list_a->content.keep_in_stack == 1)
		{
			list_a = ft_last_element(list_a);
			ra(list_a);
			list_a = ft_first_element(list_a);
		}
	}
	list_b = ft_last_element(list_b);
	list_b = list_b->previos;
	list_b->next = NULL;
	free(list_b->next);
	list_a = ft_last_element(list_a);
	ra(list_a);
	return (list_a);
}
