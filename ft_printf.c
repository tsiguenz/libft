/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2023/09/05 18:07:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(char *format, va_list *arg, int fd)
{
	int	count_print;

	count_print = 0;
	if (*format == 'c')
		count_print += ft_printchar_fd((char)va_arg(*arg, int), fd);
	else if (*format == 's')
		count_print += ft_printstr_fd((char *)va_arg(*arg, void *), fd);
	else if (*format == 'd' || *format == 'i')
		count_print += ft_printnbr_fd(va_arg(*arg, int), fd);
	else if (*format == 'u')
		count_print += (unsigned int)ft_printunsigned_fd(va_arg(*arg, int), fd);
	else if (*format == 'x')
		count_print += ft_printnbr_base_fd(va_arg(*arg, unsigned int), 0, fd);
	else if (*format == 'X')
		count_print += ft_printnbr_base_fd(va_arg(*arg, unsigned int), 1, fd);
	else if (*format == '%')
		count_print += ft_printpercent_fd(fd);
	else if (*format == 'p')
		count_print += ft_printptr_fd(va_arg(*arg, unsigned long int), fd);
	else
		count_print += ft_printchar_fd(*format, fd);
	return (count_print);
}

int	ft_printf_fd(int fd, const char *format, ...)
{
	int		i;
	int		ret_val;
	va_list	arg;

	i = 0;
	ret_val = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			ret_val += ft_parser((char *)(format + ++i), &arg, fd);
		else
			ret_val += ft_printchar_fd(format[i], fd);
		i++;
	}
	va_end(arg);
	return (ret_val);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret_val;
	va_list	arg;

	i = 0;
	ret_val = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			ret_val += ft_parser((char *)(format + ++i), &arg, 1);
		else
			ret_val += ft_printchar_fd(format[i], 1);
		i++;
	}
	va_end(arg);
	return (ret_val);
}
