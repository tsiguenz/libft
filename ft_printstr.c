/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:04:27 by tsiguenz          #+#    #+#             */
/*   Updated: 2023/09/05 17:52:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar_fd(char c, int fd)
{
	int	ret_val;

	ret_val = 0;
	ret_val += write(fd, &c, 1);
	return (ret_val);
}

int	ft_printstr_fd(char *str, int fd)
{
	if (!str)
		return (write(fd, "(null)", 6));
	return (write(fd, str, ft_strlen(str)));
}

int	ft_printpercent_fd(int fd)
{
	return (ft_printchar_fd('%', fd));
}
