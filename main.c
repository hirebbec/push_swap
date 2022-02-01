/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:44:52 by marvin            #+#    #+#             */
/*   Updated: 2022/01/30 14:39:16 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_main(char *str)
{
	free(str);
	write(1, "Error\n", 6);
	exit (1);
}

int	main(int num, char **names)
{
	char	*str;
	char	**matrix;

	if (num == 2)
	{
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
	else if (num > 2)
		quick_sort(num, names);
	return (0);
}

void	free_mat(char **mat)
{
	int	i;

	i = 1;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}
