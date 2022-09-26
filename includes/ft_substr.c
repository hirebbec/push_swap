/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:51:18 by hirebbec          #+#    #+#             */
/*   Updated: 2022/01/25 21:21:27 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

char	*ft_substr(char *s, int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	memlen;

	if (!s)
		return (NULL);
	memlen = ft_strlen(&s[start]);
	if (memlen < len)
		len = memlen;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc((len + 1));
	if (!str)
		exit(1);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
