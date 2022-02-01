/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:01:27 by marvin            #+#    #+#             */
/*   Updated: 2022/01/30 21:33:42 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	quick_sort(int num, char **names)
{
	t_list	*list_a;
	t_list	*list_b;


	if (num == 6)
		small_stack(names);
	// else
	// {
	// 	big_valid(names, num);
		create_start_list(names, &list_a);
	// 	local_stack_sort(&list_a, &list_b, names);
	// 	while (list_len(list_b) != 1)
	// 	{
	// 		direction(&list_a, &list_b);
	// 		ft_sort(ft_find_short(list_a, list_b), &list_a, &list_b);
	// 	}
	// 	ft_last(&list_a, &list_b);
	// 	list_a = ft_first_element(list_a);
	// 	if (list_a->content.true_index < list_len(list_a) / 2)
	// 		while (list_a->content.true_index-- != 1)
	// 			write(1, "rra\n", 4);
	// 	else
	// 		while (list_a->content.true_index++ != list_len(list_a) + 1)
	// 			write(1, "ra\n", 3);
	// 	ft_free(list_b);
	// }
	list_b = NULL;
	show(list_a);
	show(list_b);
	pb(&list_a, &list_b);
	show(list_a);
	show(list_b);
	pb(&list_a, &list_b);
	show(list_a);
	show(list_b);
	pb(&list_a, &list_b);
	show(list_a);
	show(list_b);
	pb(&list_a, &list_b);
	show(list_a);
	show(list_b);
}
