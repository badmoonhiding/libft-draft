/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:47:40 by aananiev          #+#    #+#             */
/*   Updated: 2023/12/27 15:43:14 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*temp;
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	res = ft_strdup(&s1[i]);
	if (!res)
		return (res);
	i = ft_strlen(res) - 1;
	while (i < ft_strlen(res) && ft_strchr(set, res[i]))
		i--;
	if (i < ft_strlen(res) && res[i])
	{
		temp = res;
		res[i + 1] = 0;
		res = ft_strdup(res);
		free(temp);
		if (!res)
			return (res);
	}
	return (res);
}
