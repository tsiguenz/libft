/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:46:49 by debian            #+#    #+#             */
/*   Updated: 2021/11/21 22:29:29 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	while (i < (nmemb * size))
	{
		* (char *) (ptr + i) = 0;
		i++;
	}
	return (ptr);
}
