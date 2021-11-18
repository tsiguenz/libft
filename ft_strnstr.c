/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:36:51 by debian            #+#    #+#             */
/*   Updated: 2021/11/18 00:47:26 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

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
