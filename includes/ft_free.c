/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:09:58 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 17:31:24 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	ft_free(t_list	*list)
{
	list = ft_first_element(list);
	while (list->next)
	{
		list = list->next;
		free(list->previos);
		list->previos = NULL;
	}
	free(list);
}

int	count(char **m)
{
	int	i;

	i = 0;
	while (m[i])
		i++;
	return (i);
}

int	free_bonus(t_list *list)
{
	list = ft_first_element(list);
	while (list->next)
	{
		list = list->next;
		free(list->previos);
		list->previos = NULL;
	}
	free(list);
	return (0);
}
