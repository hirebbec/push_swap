/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:34:59 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 21:34:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	pa(t_list *list_a, t_list *list_b)
{
	t_list	*temp;

	list_a = ft_first_element(list_a);
	list_b = ft_first_element(list_b);
	temp = ft_copy_element(list_a);
	temp->next = list_b;
	list_b->previos = temp;
	list_a = list_a->next;
	free(list_a->previos);
	list_a->previos = NULL;
	write(1, "pa\n", 4);
}

t_list	*ft_copy_element(t_list *list)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	temp->content.value = list->content.value;
	temp->content.keep_in_stack = list->content.keep_in_stack;
	temp->content.true_index = list->content.true_index;
	temp->content.local_stack = list->content.local_stack;
	temp->next = NULL;
	temp->previos = NULL;
	return (temp);
}
