/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:11:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 18:22:04 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p_s;

	i = 0;
	p_s = (char *) s;
	if (*p_s == c)
		return (p_s);
	while (i < n)
	{
		if (p_s[i] == c)
			return (&p_s[i]);
		i++;
	}
	return (0);
}
