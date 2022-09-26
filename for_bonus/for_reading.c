/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_reading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:10:41 by hirebbec          #+#    #+#             */
/*   Updated: 2022/02/18 15:41:26 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

char	*charjoin(char *str, char c)
{
	int		i;
	char	*res;

	i = ft_strlen(str);
	res = malloc(i + 2);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = c;
	res[i + 1] = '\0';
	free(str);
	return (res);
}

void	cheack_bonus(t_list *list, t_list *list_b)
{
	int	i;

	if (len_check(list, list_b))
		return ;
	list = ft_first_element(list);
	i = list->content.value;
	list = list->next;
	while (list->next)
	{
		if (i > list->content.value)
		{
			write(1, "KO\n", 3);
			return ;
		}
		i = list->content.value;
		list = list->next;
	}
	if (i > list->content.value)
	{
		write(1, "KO\n", 3);
		return ;
	}
	write(1, "OK\n", 3);
}

void	do_check(t_list **list_a, t_list **list_b, char **cmds, int i)
{
	while (cmds[i])
	{
		if (!ft_strcmp(cmds[i], "ra") || !ft_strcmp(cmds[i], "rb"))
			r_chose(cmds[i], list_a, list_b);
		else if (!ft_strcmp(cmds[i], "pa"))
			pa_bonus(list_a, list_b);
		else if (!ft_strcmp(cmds[i], "pb"))
			pb_bonus(list_a, list_b);
		else if (!ft_strcmp(cmds[i], "rr"))
			rr_bonus(list_a, list_b);
		else if (!ft_strcmp(cmds[i], "sa"))
			sa_bonus(list_a);
		else if (!ft_strcmp(cmds[i], "sb"))
			sb_bonus(list_b);
		else if (!ft_strcmp(cmds[i], "rra"))
			rra_bonus(list_a);
		else if (!ft_strcmp(cmds[i], "rrb"))
			rrb_bonus(list_b);
		else if (!ft_strcmp(cmds[i], "rrr"))
			rrr_bonus(list_a, list_b);
		else if (!ft_strcmp(cmds[i], "ss"))
			ss_bonus(list_a, list_b);
		i++;
	}
}
