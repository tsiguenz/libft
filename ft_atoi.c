/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:00:41 by debian            #+#    #+#             */
/*   Updated: 2021/11/18 01:35:01 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	neg;
	int	i;

	res = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == ' ')
		i++;
	if (!ft_isdigit(nptr[i]) && nptr[i] != '-')
		return (0);
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - 48);
		i++;
	}
	return (res * neg);
}
