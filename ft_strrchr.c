/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:24:39 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 07:41:58 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *) &str[i]);
		}
		i--;
	}
	if (c == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}
