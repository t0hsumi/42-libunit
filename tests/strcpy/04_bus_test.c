/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:42:18 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 03:36:51 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../ftests.h"
#include <string.h>

int	strcpy_bus_test(void)
{
	if (strcmp(strcpy_bus("abcde", "fgh"), strcpy("abcde", "fgh")))
		return (-1);
	else
		return (0);
}
