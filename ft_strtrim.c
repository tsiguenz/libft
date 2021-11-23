/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:21:15 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/23 16:21:46 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	all_set(const char *str, const char *set)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_set(str[i], set))
			return (0);
		i++;
	}
	return (1);
}

int	len_lt(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (is_set(s1[i], set) == 1)
		i++;
	return (i);
}

int	len_rt(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (is_set(s1[i], set))
	{
		i--;
		j++;
	}
	return (j);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		len_dest;
	char	*dest;

	i = len_lt(s1, set);
	j = 0;
	len_dest = ft_strlen(s1) - (i + len_rt(s1, set)) + 1;
	if (all_set(s1, set))
		return ("");
	dest = malloc(len_dest * sizeof(char));
	if (dest == 0)
		return (0);
	while (i < ft_strlen(s1) - len_rt(s1, set))
	{
		dest[j] = (char) s1[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}