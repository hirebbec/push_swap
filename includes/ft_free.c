/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:09:58 by marvin            #+#    #+#             */
/*   Updated: 2022/01/29 23:09:14 by hirebbec         ###   ########.fr       */
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
