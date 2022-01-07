/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:44:52 by marvin            #+#    #+#             */
/*   Updated: 2022/01/07 18:44:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int num, char **names)
{
	if (num == 1)
		exit(1);
	if (num == 2)
		valid(names[1]);
	if (num <= 5)
		small_stack_sort(num, names);
	// else
	// 	sort(num, names);
	return (0);
}