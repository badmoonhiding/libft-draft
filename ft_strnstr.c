/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:42:39 by aananiev          #+#    #+#             */
/*   Updated: 2023/12/27 15:35:11 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	ls;

	if (!little[0])
		return ((char *)big);
	ls = 0;
	while (little[ls])
		ls++;
	i = 0;
	while ((i + ls) <= len && big[i])
	{
		j = 0;
		while (big[i + j] && little[j] && little[j] == big[i + j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
