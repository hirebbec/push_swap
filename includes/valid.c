/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:13:11 by marvin            #+#    #+#             */
/*   Updated: 2022/01/07 19:13:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

#include <stdio.h>
void valid(char *str)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error();
		i++;
		j++;
    }
	if (j == 0)
		ft_error();
}

void	big_valid(char **names, int num)
{
	int	i;

	i = 1;
	while (i < num)
	{
		valid(names[i]);
		i++;
	}
	uniqs(num, names);
}

void uniqs(int num, char **names)
{
	t_list	*list;
	int	i;
	int	k;

	k = 0;
	list = create_list(num, names);
	i = 1;
	while (names[i])
	{
		while (list->next)
		{
			if (ft_atoi(names[i]) == list->content.value)
				k++;
			list = list->next;
		}
		if (ft_atoi(names[i]) == list->content.value)
				k++;
		if (k != 1)
			ft_error();
		k = 0;
		list = ft_first_element(list);
		i++; 
	}
}