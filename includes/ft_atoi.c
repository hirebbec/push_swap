/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:56:11 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/24 19:01:09 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

long int	ft_atoi(char *str)
{
	long int	i;
	long int	j;
	long int	num;

	num = 0;
	i = 0;
	j = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		j = 1;
	i = i + j;
	while (str[i])
	{
		num = str[i] - '0' + num * 10;
		i++;
	}
	if (j == 1)
		return (-num);
	return (num);
}
