/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:29:48 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/08 03:30:19 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalpha(int argc)
{
	if ((argc >= 'A' && argc <= 'Z') || (argc >= 'a' && argc <= 'z'))
	{
		return (1);
	}
	return (0);
}
