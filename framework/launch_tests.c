/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:55:52 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 22:28:21 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	c_process(t_unit_test **list)
{
	exit((*list)->test_func());
}

static void	p_process(t_unit_test **list, int *success)
{
	int	status;

	wait(&status);
	printf("	>");
	printf("%s : ", (*list)->name);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			printf("[OK]\n");
			*success = *success + 1;
		}
		else
			printf("[KO]\n");
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
		{
			printf("[SEGV]\n");
		}
		else if (WTERMSIG(status) == SIGBUS)
		{
			printf("[BUSE]\n");
		}
	}
}

int	launch_tests(t_unit_test **list)
{
	int		test_cases;
	int		success_cases;
	pid_t	pid;
	t_unit_test	*tmp;

	test_cases = 0;
	success_cases = 0;
	tmp = *list;
	while (tmp)
	{
		pid = fork();
		if (pid < 0)
		{
			printf("fork failed\n");
			ft_listclear(list);
		}
		else if (pid == 0)
			c_process(&tmp);
		else if (pid > 0)
			p_process(&tmp, &success_cases);
		tmp = tmp->next;
		test_cases++;
	}
	printf("%d / %d tests checked\n", success_cases, test_cases);
	ft_listclear(list);
	if (success_cases == test_cases)
		return (0);
	return (-1);
}
