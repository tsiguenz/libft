/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:53:11 by debian            #+#    #+#             */
/*   Updated: 2021/11/15 23:19:45 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	char		*p_src;

	p_dest = dest;
	p_src = (char *) src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}
