/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:22:21 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 00:11:24 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	if (atoi_launcher()
	& isalnum_launcher()
	& isalnum_launcher()
	& isascii_launcher()
	& isdigit_launcher()
	& isprint_launcher()
	& strchr_launcher()
	& strlen_launcher()
	& strrchr_launcher()
	& tolower_launcher()
	& toupper_launcher()
	& strdup_launcher()
	& strjoin_launcher()
	& strnstr_launcher()
	& strncmp_launcher())
		return (-1);
	else
		return (0);
}
