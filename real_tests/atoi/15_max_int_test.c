/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_max_int_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:35:47 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 22:51:59 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_max_int(void)
{
	if (ft_atoi("2147483648") == atoi("2147483648"))
		return (0);
	else
		return (-1);
}
