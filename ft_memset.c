/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:28:08 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/14 18:24:43 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while(i < n)
	{
		* (char *) (str + i) = c;
		i++;
	}
	return (str);
}
