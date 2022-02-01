/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_lists.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:02:55 by marvin            #+#    #+#             */
/*   Updated: 2022/01/30 15:31:18 by hirebbec         ###   ########.fr       */
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

	if (!list)
		return (0);
	i = 1;
	list = ft_first_element(list);
	while (list->next)
	{
		list = list->next;
		i++;
	}
	list = ft_first_element(list);
	return (i);
}

t_list	*ft_first_element(t_list *list)
{
	if (list->previos == NULL)
		return (list);
	while (list->previos)
	{
		list = list->previos;
	}
	return (list);
}
