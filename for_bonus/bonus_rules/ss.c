/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:29:02 by marvin            #+#    #+#             */
/*   Updated: 2022/01/26 22:18:12 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../push_swap.h"

void	ss_bonus(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) == 2)
		ra_bonus(list_a);
	else if (list_len(*list_a) > 1)
		sss(list_a);
	if (list_len(*list_b) == 2)
		rb_bonus(list_b);
	else if (list_len(*list_b) > 1)
		sss(list_b);
}
