/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:29:18 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &strlen_basic);
	load_test(&testlist, "NULL test", &strlen_null);
	load_test(&testlist, "Bigger test", &strlen_bigger);
	return (launch_tests(&testlist));
}
