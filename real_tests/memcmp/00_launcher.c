/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 02:19:09 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 02:47:27 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	memcmp_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("MEMCMP:");
	load_test(&testlist, "Basic test", &memcmp_basic);
	return (launch_tests(&testlist));
}
