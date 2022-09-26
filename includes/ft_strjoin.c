/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:15:16 by rsenelle          #+#    #+#             */
/*   Updated: 2022/02/18 15:11:29 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char		*strjoin;
	size_t		strjoinlen;
	size_t		i;
	size_t		j;

	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	strjoinlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	strjoin = (char *)malloc(strjoinlen);
	if (!strjoin)
		return (0);
	i = -1;
	while (s1[++i])
		strjoin[i] = s1[i];
	while (s2[j])
		strjoin[i++] = s2[j++];
	strjoin[i] = 0;
	free(s1);
	return (strjoin);
}
