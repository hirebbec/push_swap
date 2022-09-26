/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:11:33 by hirebbec          #+#    #+#             */
/*   Updated: 2022/02/18 15:59:49 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	main(int num, char **names)
{
	char	**cmds;
	char	**mat;
	t_list	*list_a;
	t_list	*list_b;

	list_b = NULL;
	if (num == 1)
		return (0);
	mat = get_names(names);
	create_start_list(mat, &list_a, count(mat));
	free_mat(mat);
	cmds = get_cmds();
	do_check(&list_a, &list_b, cmds, 0);
	cheack_bonus(list_a, list_b);
	free_mat(cmds);
	smart_free(list_a, list_b);
}

char	**get_cmds(void)
{
	char	c;
	char	*str;
	char	*tmp;
	char	**mat;

	str = malloc(1);
	while (read(0, &c, 1))
	{
		str = charjoin(str, c);
		if (c == '\n')
		{
			tmp = ft_strtrim(str, "\n");
			if (ft_strlen(tmp) != 0)
				valid_cmds(ft_split_bonus(str, '\n'));
			free(tmp);
		}
	}
	mat = ft_split_bonus(str, '\n');
	if (ft_strcmp("", str))
		free(str);
	return (mat);
}

void	valid_cmds(char **cmds)
{
	int	i;

	i = 0;
	while (cmds[i])
	{
		if (ft_strcmp(cmds[i], "ra") && ft_strcmp(cmds[i], "rb") \
			&& ft_strcmp(cmds[i], "sa") && ft_strcmp(cmds[i], "sb") \
			&& ft_strcmp(cmds[i], "rr") && ft_strcmp(cmds[i], "pa") \
			&& ft_strcmp(cmds[i], "pb") && ft_strcmp(cmds[i], "rra") \
			&& ft_strcmp(cmds[i], "rrb") && ft_strcmp(cmds[i], "rrr") \
			&& ft_strcmp(cmds[i], "ss"))
		{
			free_mat(cmds);
			ft_error();
		}
		i++;
	}
	free_mat(cmds);
}

char	**get_names(char **names)
{
	char	*str;
	int		i;
	char	**mat;

	str = malloc(1);
	i = 0;
	while (names[i])
	{
		str = ft_strjoin(str, names[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	mat = ft_split_bonus(str, ' ');
	free(str);
	if (big_valid_bonus(mat, count(mat)) == 0)
	{
		free_mat(mat);
		ft_error();
	}
	return (mat);
}

void	r_chose(char *str, t_list **list_a, t_list **list_b)
{
	if (!ft_strcmp(str, "ra"))
		ra_bonus(list_a);
	else if (!ft_strcmp(str, "rb"))
		rb_bonus(list_b);
}
