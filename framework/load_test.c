/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:33:55 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 02:51:49 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit_test	*new_test_list(char *name, int (*test)(void),
		t_unit_test **list)
{
	t_unit_test	*test_list;

	test_list = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!test_list)
		ft_listclear(list);
	test_list->name = name;
	test_list->test_func = test;
	test_list->next = NULL;
	return (test_list);
}

void	load_test(t_unit_test **test_list, char *name, int (*test)(void))
{
	t_unit_test	*tmp;

	if (!test_list || !test)
		return ;
	if (*test_list == NULL)
		*test_list = new_test_list(name, test, test_list);
	else
	{
		tmp = *test_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_test_list(name, test, test_list);
	}
}
