/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:44:07 by aananiev          #+#    #+#             */
/*   Updated: 2023/12/27 15:45:18 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	int	res;

	res = 0;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			while (*s && *s != c)
				s++;
			res++;
		}
	}
	return (res);
}

static int	ft_word_length(const char *s, char c)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		k;

	k = 0;
	res = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	while (res && s && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[k] = malloc(sizeof(char) * (ft_word_length(s, c) + 1));
			i = -1;
			while (s[++i] && s[i] != c)
				res[k][i] = s[i];
			res[k++][i] = 0;
			s += i;
		}
	}
	if (res)
		res[k] = 0;
	return (res);
}
