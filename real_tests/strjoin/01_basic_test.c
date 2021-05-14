/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:37:44 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:45:53 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	strjoin_basic(void)
{
	if (strcmp(ft_strjoin("this is", " test"), strjoin("this is", " test")))
		return (-1);
	else
		return (0);
}
