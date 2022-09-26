/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:44:52 by marvin            #+#    #+#             */
/*   Updated: 2022/02/18 15:10:45 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_main(char *str)
{
	free(str);
	write(2, "Error\n", 6);
	exit (1);
}

void	main_case_two(char **names)
{
	char	*str;
	char	**matrix;

	str = ft_strtrim(names[1], " ");
	if (!ft_strchr(str, ' '))
	{
		valid_with_free(str);
		if (ft_atoi(names[1]) > 2147483647)
			ft_error_main(str);
		free(str);
	}
	else
	{
		free(str);
		matrix = ft_split(names[1], ' ');
		quick_sort(count(matrix), matrix);
		free_mat(matrix);
	}
}

int	main(int num, char **names)
{
	char	*str;
	char	**matrix;

	if (num == 2)
		main_case_two(names);
	else if (num > 2)
	{
		str = get_str(names);
		matrix = ft_split(str, ' ');
		free(str);
		quick_sort(count(matrix), matrix);
		free_mat(matrix);
	}
	return (0);
}

char	*get_str(char **names)
{
	int		i;
	char	*res;

	res = malloc(1);
	i = 1;
	while (names[i])
	{
		res = ft_strjoin(res, names[i++]);
		res = ft_strjoin(res, " ");
	}
	return (res);
}
