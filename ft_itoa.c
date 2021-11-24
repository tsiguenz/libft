/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:01:35 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 18:20:29 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str);
	tmp = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (tmp == 0)
		return (0);
	tmp[j--] = 0;
	while (str[i])
	{
		tmp[j] = str[i];
		i++;
		j--;
	}
	return (tmp);
}

static int	len_itoa(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
	{
		return (11);
	}
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static int	is_neg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*dest;

	i = 0;
	neg = is_neg(n);
	n = n * neg;
	dest = malloc((len_itoa(n) + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	if (n == -2147483648)
		return ("-2147483648");
	while (n > 9)
	{
		dest[i++] = (n % 10) + 48;
		n = (n - (n % 10)) / 10;
	}
	dest[i] = n + 48;
	if (neg == -1)
		dest[++i] = '-';
	dest[++i] = 0;
	return (ft_strrev(dest));
}
