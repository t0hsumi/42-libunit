/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_seg_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:42:18 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 02:42:05 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../ftests.h"
#include <string.h>

int	strdup_seg_test(void)
{
	if (strcmp(strcpy_seg("abcde", "fgh"), strcpy("abcde", "fgh")))
		return (-1);
	else
		return (0);
}
