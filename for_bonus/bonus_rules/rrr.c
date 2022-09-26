/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:45:57 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:18:29 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../push_swap.h"

void	rrr_bonus(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_b) > 1)
		rra_rrb(list_b);
	if (list_len(*list_b) > 1)
		rra_rrb(list_a);
}
