/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:27:42 by marvin            #+#    #+#             */
/*   Updated: 2022/01/07 21:27:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

t_list  *create_list(int num, char **names)
{
    int     i;
    t_list  *list;

	i = 2;
	list = new_element(ft_atoi(names[1]));
	while (i < num)
	{
		add_front_element(&list, ft_atoi(names[i]));
		i++;
	}
	return (list);
}

t_list  *new_element(int value)
{
    t_list  *new;

	new = malloc(sizeof(t_list));
	new->content.value = value;
	new->next = NULL;
    new->previos = NULL;
	return (new);
}

void  add_front_element(t_list  **list, int new_value)
{
	t_list	*new;
	t_list	*temp;

	new = new_element(new_value);
	temp = ft_last_element(*list);
	new->previos = temp;
	temp->next = new;
}

t_list	*ft_last_element(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

t_list	*ft_first_element(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->previos)
	{
		lst = lst->previos;
	}
	return (lst);
}
