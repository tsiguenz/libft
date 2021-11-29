/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:08:13 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/29 17:28:20 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p_s1;
	char	*p_s2;

	i = 0;
	p_s1 = (char *) s1;
	p_s2 = (char *) s2;
	while (i < n)
	{
		if ((unsigned char) p_s1[i] < (unsigned char) p_s2[i])
			return (-1);
		if ((unsigned char) p_s1[i] > (unsigned char) p_s2[i])
			return (1);
		i++;
	}
	return (0);
}
