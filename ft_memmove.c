/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:27:37 by aananiev          #+#    #+#             */
/*   Updated: 2023/11/19 21:27:40 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (s && d)
	{
		i = 0;
		if (s < d)
			i = n - 1;
		while (i < n)
		{
			d[i] = s[i];
			if (s > d)
				i++;
			else
				i--;
		}
	}
	return (dest);
}
