/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:07:59 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 02:45:45 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	isalnum_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ISALNUM:");
	load_test(&testlist, "Basic test", &isalnum_basic);
	return (launch_tests(&testlist));
}
