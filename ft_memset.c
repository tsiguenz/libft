/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:28:08 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/10 00:36:48 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	*ft_memset(void *str, int c, unsigned int n)
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
