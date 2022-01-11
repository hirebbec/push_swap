/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:01:27 by marvin            #+#    #+#             */
/*   Updated: 2022/01/07 20:01:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	quick_sort(int num, char **names)
{
	t_list	*list_a;
	t_list	*list_b;

	big_valid(names, num);
	list_a = create_list(num, names);
	list_b = malloc(sizeof(t_list));
	list_b->next = NULL;
	list_b->previos = NULL;
	list_a = do_lists(list_a, list_b, num, names);
	list_a = ft_first_element(list_a);
	list_b = ft_first_element(list_b);
	ft_direction(list_a);
	ft_direction(list_b);
	ft_range(list_a, list_b);
	printf("<<%d>>\n",(ft_find_short(list_a, list_b)));
	printf("\n\n\n\nSTACK_A\n");
	while (list_a->next)
	{
		printf("value = %d  index = %d  keep_in_stack = %d  direction = %d  range = %d\n", list_a->content.value,list_a->content.true_index, list_a->content.keep_in_stack, list_a->content.direction, list_a->content.range);
		list_a = list_a->next;
	}
	printf("value = %d  index = %d  keep_in_stack = %d  direction = %d  range = %d\n", list_a->content.value, list_a->content.true_index, list_a->content.keep_in_stack, list_a->content.direction, list_a->content.range);
	list_b = ft_first_element(list_b);
	printf("\n\n\n\nSTACK_B\n");
	while (list_b->next)
	{
		printf("value = %d  index = %d keep_in_stack = %d  direction = %d  range = %d\n", list_b->content.value, list_b->content.true_index,list_b->content.keep_in_stack, list_b->content.direction, list_b->content.range);
		list_b = list_b->next;
	}
	printf("value = %d  index = %d keep_in_stack = %d  direction = %d  range = %d\n", list_b->content.value, list_b->content.true_index,list_b->content.keep_in_stack, list_b->content.direction, list_b->content.range);
}
