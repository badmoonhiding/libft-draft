/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:19:45 by aananiev          #+#    #+#             */
/*   Updated: 2023/12/27 15:32:35 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*h;

	h = (char *)s;
	if (h)
	{
		while (*h)
			h++;
		if (!c)
			return (h);
		while (h >= s)
		{
			if (*h == (char)c)
				return (h);
			h--;
		}
	}
	return (0);
}
