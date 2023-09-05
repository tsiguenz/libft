/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:26:39 by tsiguenz          #+#    #+#             */
/*   Updated: 2023/09/05 17:58:18 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_strlen(char *str);
int	ft_printchar_fd(char c, int fd);
int	ft_printstr_fd(char *str, int fd);
int	ft_printpercent_fd(int fd);
int	ft_printnbr_fd(int nb, int fd);
int	ft_printunsigned_fd(unsigned int nb, int fd);
int	ft_printnbr_base_fd(unsigned int nb, int maj, int fd);
int	ft_printptr_fd(unsigned long nb, int fd);
int	ft_printf(const char *format, ...);
int	ft_printf_fd(int fd, const char *format, ...);

#endif
