/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 22:56:58 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ATOI:");
	load_test(&testlist, "Basic test1", &atoi_basic1);
	load_test(&testlist, "Basic test2", &atoi_basic2);
	load_test(&testlist, "Basic test3", &atoi_basic3);
	load_test(&testlist, "NULL test", &atoi_null);
	load_test(&testlist, "Min int test", &atoi_min_int);
	load_test(&testlist, "Basic test4", &atoi_basic4);
	load_test(&testlist, "Basic test5", &atoi_basic5);
	load_test(&testlist, "Basic test6", &atoi_basic6);
	load_test(&testlist, "Escape test", &atoi_escape);
	load_test(&testlist, "Basic test7", &atoi_basic7);
	load_test(&testlist, "Basic test8", &atoi_basic8);
	load_test(&testlist, "Basic test9", &atoi_basic9);
	load_test(&testlist, "Basic test10", &atoi_basic10);
	load_test(&testlist, "Long test", &atoi_long);
	load_test(&testlist, "Max int test", &atoi_max_int);
	return (launch_tests(&testlist));
}
