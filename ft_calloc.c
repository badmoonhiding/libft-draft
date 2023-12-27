/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:05:55 by aananiev          #+#    #+#             */
/*   Updated: 2023/11/19 21:05:57 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*t;
	size_t			i;
	unsigned int	maxsize;

	t = 0;
	maxsize = -1;
	if ((nmemb <= maxsize || size <= maxsize) && nmemb * size <= maxsize)
		t = malloc(nmemb * size);
	i = 0;
	while (t && i < (nmemb * size))
		t[i++] = 0;
	return (t);
}
