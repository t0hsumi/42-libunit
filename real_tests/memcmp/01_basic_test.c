/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 02:23:16 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 02:43:05 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	memcmp_basic(void)
{
	if (ft_memcmp("memcmp\0\0\0", "memcmp\0aaa", 6)
		== memcmp("memcmp\0\0\0", "memcmp\0aaa", 6))
		return (0);
	else
		return (-1);
}
