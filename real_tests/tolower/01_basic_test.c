/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:38:40 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/10 09:42:21 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	tolower_basic(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		if (ft_tolower(i) != tolower(i))
			return (-1);
		i++;
	}
	return (0);
}
