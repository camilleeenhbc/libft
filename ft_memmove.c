/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:41:39 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 07:01:28 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (str2 < str1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
