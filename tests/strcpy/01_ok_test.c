/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:42:18 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 04:06:57 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../ftests.h"
#include <string.h>

int	strcpy_ok_test(void)
{
	char	d[3];
	char	s[3];

	d[0] = 'a';
	d[1] = 'b';
	d[2] = '\0';
	s[0] = 'a';
	s[1] = 'b';
	s[2] = '\0';
	if (strcpy_ok(d, s) != strcpy(d, s))
		return (-1);
	else
		return (0);
}
