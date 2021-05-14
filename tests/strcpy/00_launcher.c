/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 02:34:58 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftests.h"

int	strcpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRCPY:");
	load_test(&testlist, "OK test", &strcpy_ok);
	load_test(&testlist, "KO test", &strcpy_ko);
	load_test(&testlist, "SEG test", &strcpy_seg);
	load_test(&testlist, "BUS test", &strcpy_bus);
	return (launch_tests(&testlist));
}
