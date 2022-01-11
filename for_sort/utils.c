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
	return (list_a);
}

void	cheack(t_list *list)
{
	int	i;

	list = ft_first_element(list);
	i = list->content.value;
	list = list->next;
	while (list->next)
	{
		if (i > list->content.value)
			return ;
		i = list->content.value;
		list = list->next;
	}
	if (i > list->content.value)
			return ;
	ft_free(list);
	exit(1);
}

void	ft_direction(t_list *list)
{
	int	i;
	int	j;

	j = 1;
	i = list_len(list);
	while (list->next)
	{
		if (j <= i / 2)
			list->content.direction = 1;
		else
			list->content.direction = 0;
		j++;
		list = list->next;
	}
	if (j <= i / 2)
		list->content.direction = 1;
	else
		list->content.direction = 0;
}

void	ft_range(t_list *list_a, t_list *list_b)
{
	range(list_a);
	range(list_b);
	list_a = ft_first_element(list_a);
	list_b = ft_first_element(list_b);
}
