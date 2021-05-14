/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 03:30:58 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftests.h"

int	strcpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRCPY:");
	load_test(&testlist, "OK test", &strcpy_ok_test);
	load_test(&testlist, "KO test", &strcpy_ko_test);
	load_test(&testlist, "SEG test", &strcpy_seg_test);
	load_test(&testlist, "BUS test", &strcpy_bus_test);
	return (launch_tests(&testlist));
}
