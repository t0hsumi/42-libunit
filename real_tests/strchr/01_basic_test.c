/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:37:44 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 23:26:57 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strchr_basic(void)
{
	if (strcmp(ft_strchr("slfafa", 'a'), strchr("slfafa", 'a')))
		return (-1);
	else
		return (0);
}
