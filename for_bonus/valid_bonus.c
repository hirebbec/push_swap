/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:19:22 by hirebbec          #+#    #+#             */
/*   Updated: 2022/02/07 17:39:09 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	big_valid_bonus(char **names, int num)
{
	int	i;

	i = 1;
	while (i < num)
	{
		if (valid_bonus(names[i]) == 0)
			return (0);
		if (ft_atoi(names[i]) > 2147483647)
			return (0);
		i++;
	}
	if (uniqs_bonus(num, names) == 0)
		return (0);
	return (1);
}

int	valid_bonus(char *str)
{
	int	i;
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
			return (0);
		i++;
		j++;
	}
	if (j == 0)
		return (0);
	return (1);
}

int	uniqs_bonus(int num, char **names)
{
	t_list	*list;
	int		i;
	int		k;

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
		if (ft_atoi(names[i++]) == list->content.value)
			k++;
		if (k != 1)
			return (free_bonus(list));
		k = 0;
		list = ft_first_element(list);
	}
	ft_free(list);
	return (1);
}

void	smart_free(t_list *list_a, t_list *list_b)
{
	if (list_len(list_a) != 0)
		ft_free(list_a);
	if (list_len(list_b) != 0)
		ft_free(list_b);
}

int	len_check(t_list *list_a, t_list *list_b)
{
	if (list_len(list_b) != 0)
	{
		write(1, "KO\n", 3);
		return (1);
	}
	if (list_len(list_a) == 1)
	{
		write(1, "OK\n", 3);
		return (1);
	}
	return (0);
}
