/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:39:55 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRDUP:");
	load_test(&testlist, "Basic test", &strdup_basic);
	return (launch_tests(&testlist));
}
