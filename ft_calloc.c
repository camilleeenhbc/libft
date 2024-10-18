/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:20:29 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 07:54:51 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*res;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	res = malloc(size * nitems);
	if (!res)
	{
		return (NULL);
	}
	ft_bzero(res, size * nitems);
	return (res);
}
