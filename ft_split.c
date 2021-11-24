/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:25:43 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 18:16:42 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(const char *s, char c)
{
	int	ctr;
	int	i;

	ctr = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			ctr++;
		i++;
	}
	if (s[i] == c && s[i - 1] != c)
		ctr++;
	return (ctr);
}

static int	wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*wordcopy(const char *s, int n)
{
	char	*res;

	res = malloc(n + 1 * sizeof (char));
	if (res == 0)
		return (0);
	res[n] = '\0';
	n--;
	while (n >= 0)
	{
		res[n] = s[n];
		n--;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*p_s;
	int		size;
	int		i;

	i = 0;
	p_s = (char *) s;
	size = wordcount(p_s, c);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == 0)
		return (0);
	while (i < size)
	{
		while (*p_s && *p_s == c)
			p_s++;
		while (*p_s && *p_s != c)
		{
			tab[i] = wordcopy(p_s, wordlen(p_s, c));
			p_s = p_s + wordlen(p_s, c);
		}
		i++;
	}
	tab[size] = 0;
	return (tab);
}
