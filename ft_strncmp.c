/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:45:44 by hoanguye          #+#    #+#             */
/*   Updated: 2023/08/08 07:56:46 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)str1[i] == (unsigned char)str2[i] && str1[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((int)((unsigned char)str1[i] - (unsigned char)str2[i]));
}
