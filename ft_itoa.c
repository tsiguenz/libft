/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:42:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/23 18:27:33 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*res;
	int		neg;
	
	neg = 1;
	res = malloc(  * sizeof(char));
	if (res == 0)
		return (0);
	if (n < 0)
		neg = neg * -1;
	
	return (res);
}
