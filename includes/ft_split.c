/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:15:51 by hirebbec          #+#    #+#             */
/*   Updated: 2022/01/25 21:21:06 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	ft_kolvoslov(char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			k++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (k);
}

char	**ft_free2(char **res)
{
	if (res)
	{
		while (*res)
		{
			free(*res);
			(*res)++;
		}
		free(res);
	}
	return ((char **) NULL);
}

char	**ft_putstring(int k, char *s, char c, char **res)
{
	int				numstr;
	int				m[2];

	m[0] = 0;
	res[0] = "./push_swap";
	numstr = 1;
	while (numstr < k)
	{
		m[1] = 0;
		while (s[m[0]] != c && s[m[0]])
		{
			m[0]++;
			m[1]++;
		}
		if (m[1])
		{
			res[numstr] = ft_substr(s, (m[0] - m[1]), m[1]);
			if (res[numstr] == NULL)
				return (ft_free2(res));
			numstr++;
		}
		m[0]++;
	}
	res[numstr] = NULL;
	return (res);
}

char	**ft_split(char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((sizeof(char *) * (ft_kolvoslov(s, c) + 2)));
	if (!res)
		exit(1);
	res = ft_putstring(ft_kolvoslov(s, c) + 1, s, c, res);
	return (res);
}
