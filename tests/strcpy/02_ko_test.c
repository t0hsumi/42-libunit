/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:42:18 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 03:54:10 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../ftests.h"
#include <string.h>

int	strcpy_ko_test(void)
{
	char	d[3];
	char	s[3];

	d[0] = 'a';
	d[1] = 'b';
	d[2] = 'c';
	s[0] = 'd';
	s[1] = 'e';
	s[2] = 'f';
	if (strcpy_ko(d, s) != strcpy(d, s))
		return (-1);
	else
		return (0);
}
