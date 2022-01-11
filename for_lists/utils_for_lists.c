/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_listst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:02:55 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 21:02:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	add_back_element(t_list **list, int new_value)
{
	t_list	*new;
	t_list	*temp;

	new = new_element(new_value);
	temp = ft_first_element(*list);
	new->next = temp;
	temp->previos = new;
}

int	list_len(t_list *list)
{
	int	i;

	i = 1;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	list = ft_first_element(list);
	return (i);
}