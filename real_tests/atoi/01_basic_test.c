/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:32:32 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 21:13:43 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_basic1(void)
{
	if (ft_atoi("     124") == atoi("     124"))
		return (0);
	else
		return (-1);
}