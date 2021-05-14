/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:51:40 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/10 09:51:52 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	isprint_basic(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		if (ft_isprint(i) != isprint(i))
			return (-1);
		i++;
	}
	return (0);
}
