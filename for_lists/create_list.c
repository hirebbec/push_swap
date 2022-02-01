/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:27:42 by marvin            #+#    #+#             */
/*   Updated: 2022/01/25 16:09:54 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

t_list	*create_list(int num, char **names)
{
	int		i;
	t_list	*list;

	i = 2;
	list = new_element(ft_atoi(names[1]));
	while (i < num)
	{
		add_front_element(&list, ft_atoi(names[i]));
		i++;
	}
	list = ft_first_element(list);
	while (list->next)
	{
		list->content.true_index = 0;
		list->content.local_stack = 1;
		list->content.keep_in_stack = 0;
		list = list->next;
	}
	list->content.true_index = 0;
	list->content.local_stack = 1;
	list->content.keep_in_stack = 0;
	list = ft_first_element(list);
	return (list);
}

void	create_start_list(char **names, t_list **list)
{
	int	i;

	i = 2;
	*list = new_element(ft_atoi(names[1]));
	while (names[i])
	{
		add_front_element(list, ft_atoi(names[i]));
		i++;
	}
}

t_list	*new_element(int value)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		exit(1);
	new->content.value = value;
	new->content.range = 0;
	new->content.local_stack = 1;
	new->content.keep_in_stack = 0;
	new->content.direction = 0;
	new->content.true_index = 0;
	new->next = NULL;
	new->previos = NULL;
	return (new);
}

void	add_front_element(t_list **list, int new_value)
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
