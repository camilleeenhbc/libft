/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:30:51 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 07:36:31 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int	is_in_set(char c, const char *set)
{
	int	len;
	int	i;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		count;
	char	*res;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	res = (char *) malloc(sizeof(*s1) * (end - start + 1));
	if (!res)
		return (NULL);
	count = 0;
	while (start < end)
		res[count++] = s1[start++];
	res[count] = 0;
	return (res);
}
