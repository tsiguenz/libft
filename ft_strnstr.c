/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:36:51 by debian            #+#    #+#             */
/*   Updated: 2021/11/24 18:18:40 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *) big);
	while (big[i] != 0 && i < len - 1)
	{
		while (big[i] && little[j] && big[i] == little[j])
		{
			i++;
			j++;
		}
		if (little[j] == 0 || i == len)
			return ((char *) &big[i - j]);
		if (big[i] != 0)
			i++;
		j = 0;
	}
	return (0);
}
