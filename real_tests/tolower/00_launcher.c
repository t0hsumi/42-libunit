/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:32:05 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	tolower_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("TOLOWER:");
	load_test(&testlist, "Basic test", &tolower_basic);
	return (launch_tests(&testlist));
}
