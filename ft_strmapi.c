/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:43:29 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 07:23:44 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*res;

	len = ft_strlen(s);
	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
	{
		return (NULL);
	}
	res[len] = '\0';
	while (i < (unsigned int)len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
