/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:42:21 by tsiguenz          #+#    #+#             */
/*   Updated: 2023/09/05 17:48:21 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_fd(int nb, int fd)
{
	int	ret;

	ret = 0;
	if (nb >= 0 && nb <= 9)
		ret += ft_printchar_fd(nb + '0', fd);
	else if (nb == -2147483648)
		ret += (int) write(fd, "-2147483648", 11);
	else if (nb < 0)
	{
		ret += (int) write(fd, "-", 1);
		ret += ft_printnbr_fd(-nb, fd);
	}
	else
	{
		ret += ft_printnbr_fd(nb / 10, fd);
		ret += ft_printnbr_fd(nb % 10, fd);
	}
	return (ret);
}

int	ft_printunsigned_fd(unsigned int nb, int fd)
{
	int	ret;

	ret = 0;
	if (nb <= 9)
		ret += ft_printchar_fd(nb + '0', fd);
	else
	{
		ret += ft_printnbr_fd(nb / 10, fd);
		ret += ft_printnbr_fd(nb % 10, fd);
	}
	return (ret);
}

int	ft_printnbr_base_fd(unsigned int nb, int maj, int fd)
{
	int		ret;
	char	*base;

	ret = 0;
	if (!maj)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb <= (unsigned int)ft_strlen(base) - 1)
		ret += ft_printchar_fd(base[nb], fd);
	else
	{
		ret += ft_printnbr_base_fd(nb / ft_strlen(base), maj, fd);
		ret += ft_printnbr_base_fd(nb % ft_strlen(base), maj, fd);
	}
	return (ret);
}

int	ft_printaddress_fd(unsigned long nb, int fd)
{
	int		ret;
	char	*base;

	ret = 0;
	base = "0123456789abcdef";
	if (nb <= 15)
		ret += ft_printchar_fd(base[nb], fd);
	else
	{
		ret += ft_printaddress_fd(nb / 16, fd);
		ret += ft_printaddress_fd(nb % 16, fd);
	}
	return (ret);
}

int	ft_printptr_fd(unsigned long nb, int fd)
{
	int	ret;

	ret = 0;
	ret += ft_printstr_fd("0x", fd);
	ret += ft_printaddress_fd(nb, fd);
	return (ret);
}
