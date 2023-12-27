/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:49:13 by aananiev          #+#    #+#             */
/*   Updated: 2023/11/20 10:49:15 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*c;

	n = 0;
	while (lst && f && del)
	{
		c = ft_lstnew(lst->content);
		c->content = f(c->content);
		ft_lstadd_back(&n, c);
		lst = lst->next;
	}
	return (n);
}
