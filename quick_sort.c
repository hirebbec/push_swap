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

void	quick_sort(int num, char **names)
{
	t_list	*list_a;
	t_list	*list_b;

	big_valid(names, num);
	do_lists(list_a, list_b, num, names);
}
