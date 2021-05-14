/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:22:21 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/15 03:57:00 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
	atoi_launcher();
	isalnum_launcher();
	isalnum_launcher();
	isascii_launcher();
	isdigit_launcher();
	isprint_launcher();
	strchr_launcher();
	strlen_launcher();
	strrchr_launcher();
	tolower_launcher();
	toupper_launcher();
	strdup_launcher();
	memcmp_launcher();
	strnstr_launcher();
	strncmp_launcher();
	return (0);
}
