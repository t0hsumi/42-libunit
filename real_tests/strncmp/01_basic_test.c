/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:37:44 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:48:12 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strncmp_basic(void)
{
	if (ft_strncmp("abcdefff", "abcdeggg", 5) == strncmp("abcdefff", "abcdeggg", 5))
		return (0);
	else
		return (-1);
}
