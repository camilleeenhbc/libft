/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaunguyen <chaunguyen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:29:36 by chaunguyen        #+#    #+#             */
/*   Updated: 2023/08/01 05:49:56 by chaunguyen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalnum(int argc)
{
	if (argc >= '0' && argc <= '9')
	{
		return (1);
	}
	else if (argc >= 'A' && argc <= 'Z')
	{
		return (1);
	}
	else if (argc >= 'a' && argc <= 'z')
	{
		return (1);
	}
	return (0);
}
