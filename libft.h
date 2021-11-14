/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:22:38 by thibautsi         #+#    #+#             */
/*   Updated: 2021/11/14 19:24:02 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
void 		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, int n);
//ft_memcpy();
//ft_memmove();
//ft_strlcpy();
//ft_strlcat();
int		ft_toupper(int c);
int		ft_tolower(int c);
//char		*ft_strchr(const char *s, int c);

#endif //LIBFT_H
