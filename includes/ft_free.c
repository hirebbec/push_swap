/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:09:58 by marvin            #+#    #+#             */
/*   Updated: 2022/01/08 17:09:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	ft_free(t_list	*list)
{
	void	*next;

	while (list->next)
	{
		next = list->next;
		free(list);
		list = next;
	}
	free(list);
}
