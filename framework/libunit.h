/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:02:12 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:33:33 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <sys/wait.h>

typedef struct		s_unit_test
{
	char				*name;
	int					(*test_func)(void);
	struct s_unit_test	*next;
}					t_unit_test;

void	load_test(t_unit_test **test_list, char *name, int (*test)(void));
int		launch_tests(t_unit_test **list);
void	ft_listclear(t_unit_test **list);

#endif
