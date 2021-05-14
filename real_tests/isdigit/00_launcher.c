/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:22:43 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	isdigit_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ISDIGIT:");
	load_test(&testlist, "Basic test", &isdigit_basic);
	return (launch_tests(&testlist));
}
