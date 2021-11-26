/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:16:00 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/26 20:40:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		new_elem = ft_lstnew(lst->content);
		ft_lstadd_back(&new_list, new_elem);
		del(new_elem);
		lst = lst->next;
	}
	return (new_list);
}
