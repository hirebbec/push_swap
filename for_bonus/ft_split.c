/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:42:26 by rsenelle          #+#    #+#             */
/*   Updated: 2022/02/18 15:43:52 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	ft_kolvoslov_bonus(char *s, char c)
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

char	**ft_free_bonus(char **res)
{
	if (res)
	{
		while (*res)
		{
			free(*res);
			*res = NULL;
			(*res)++;
		}
		free(res);
		res = NULL;
	}
	return ((char **) NULL);
}

static char	**ft_putstring_bonus(int k, char *s, char c, char **res)
{
	int	i;
	int	numstr;
	int	lastletter;

	i = 0;
	numstr = 0;
	while (numstr < k)
	{
		lastletter = 0;
		while (s[i] != c && s[i])
		{
			i++;
			lastletter++;
		}
		if (lastletter)
		{
			res[numstr] = ft_substr(s, (i - lastletter), lastletter);
			if (res[numstr] == NULL)
				return (ft_free_bonus(res));
			numstr++;
		}
		i++;
	}
	res[numstr] = NULL;
	return (res);
}

char	**ft_split_bonus(char *s, char c)
{
	char			**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((sizeof(char *) * (ft_kolvoslov_bonus(s, c) + 1)));
	if (!res)
		return (NULL);
	res = ft_putstring_bonus(ft_kolvoslov_bonus(s, c), s, c, res);
	return (res);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
