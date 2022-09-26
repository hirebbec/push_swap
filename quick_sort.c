/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:01:27 by marvin            #+#    #+#             */
/*   Updated: 2022/02/18 15:20:09 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_small_stack(int num, char **names)
{
	big_valid(names, num);
	small_stack(names);
}

void	sort_three(char **names, int num)
{
	t_list	*list_a;

	big_valid(names, num);
	list_a = create_list(4, names);
	cheack(list_a);
	ft_sort_three(&list_a);
	ft_free(list_a);
}

void	sort_little(char **names, int num)
{
	if (num == 6)
		ft_small_stack(num, names);
	else if (num == 4)
		sort_three(names, num);
}

void	quick_sort(int num, char **names)
{
	t_list	*list_a;
	t_list	*list_b;

	if (num == 6 || num == 4)
		sort_little(names, num);
	else
	{
		create_start_list(names, &list_a, num);
		local_stack_sort(&list_a, &list_b, names);
		while (list_len(list_b) != 1)
		{
			direction(&list_a, &list_b);
			ft_sort(ft_find_short(list_a, list_b), &list_a, &list_b);
		}
		ft_last(&list_a, &list_b);
		list_a = ft_first_element(list_a);
		if (list_a->content.true_index < list_len(list_a) / 2)
			while (list_a->content.true_index-- != 1)
				write(1, "rra\n", 4);
		else
			while (list_a->content.true_index++ != list_len(list_a) + 1)
				write(1, "ra\n", 3);
		ft_free(list_b);
	}
}
