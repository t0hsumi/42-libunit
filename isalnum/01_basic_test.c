/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:46:26 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/10 09:49:39 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	isalnum_basic(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		if (ft_isalnum(i) != isalnum(i))
			return (-1);
		i++;
	}
	return (0);
}
