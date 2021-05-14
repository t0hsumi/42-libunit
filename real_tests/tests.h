/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:05:51 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 01:54:53 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include "libft.h"
# include "libunit.h"

int	atoi_launcher(void);
int	atoi_basic1(void);
int	atoi_basic2(void);
int	atoi_null(void);
int	atoi_basic3(void);
int	atoi_basic4(void);
int	atoi_basic5(void);
int	atoi_basic6(void);
int	atoi_basic7(void);
int	atoi_basic8(void);
int	atoi_basic9(void);
int	atoi_basic10(void);
int	atoi_min_int(void);
int	atoi_max_int(void);
int	atoi_escape(void);
int	atoi_long(void);
int	isalnum_launcher(void);
int	isalnum_basic(void);
int	isalpha_launcher(void);
int	isalpha_basic(void);
int	isascii_launcher(void);
int	isascii_basic(void);
int	isdigit_launcher(void);
int	isdigit_basic(void);
int	isprint_launcher(void);
int	isprint_basic(void);
int	strchr_launcher(void);
int	strchr_basic(void);
int	strrchr_launcher(void);
int	strrchr_basic(void);
int	tolower_launcher(void);
int	tolower_basic(void);
int	toupper_launcher(void);
int	toupper_basic(void);
int	strlen_launcher(void);
int	strlen_basic(void);
int	strlen_null(void);
int	strlen_bigger(void);
int	strdup_launcher(void);
int	strdup_basic(void);
int	strjoin_launcher(void);
int	strjoin_basic(void);
int	strncmp_launcher(void);
int	strncmp_basic(void);
int	strnstr_launcher(void);
int	strnstr_basic(void);
#endif
