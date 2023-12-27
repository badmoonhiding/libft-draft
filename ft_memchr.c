/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:25:50 by aananiev          #+#    #+#             */
/*   Updated: 2023/11/19 21:25:52 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ss;

	i = 0;
	ss = s;
	while (i < n)
	{
		if (ss[i] == (char)c)
			return ((void *)&ss[i]);
		i++;
	}
	return (0);
}
