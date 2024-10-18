/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:35:54 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 07:40:55 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	int	i;

	i = 0;
	while (i < (int)num)
	{
		if (((unsigned char *)ptr1)[i] != ((unsigned char *)ptr2)[i])
		{
			return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
		}
		i++;
	}
	return (0);
}
