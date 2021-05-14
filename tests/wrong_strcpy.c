/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_strcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 02:21:53 by dainoue           #+#    #+#             */
/*   Updated: 2021/05/15 02:47:38 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftests.h"

char	*strcpy_ok(char *dest, const char *src)
{
	int	i;

	i = 0;
	if (dest && src)
	{
		while (src)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}

char	*strcpy_ko(char *dest, const char *src)
{
	char	*ans;

	(void)dest;
	(void)src;
	ans = "im not the cpy of src lol";
	return (ans);
}

char	*strcpy_seg(char *dest, const char *src)
{
	int	i;

	i = 0;
	if (dest && src)
	{
		while (i < 100000)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}

char	*strcpy_bus(char *dest, const char *src)
{
	int	i;

	i = 0;
	dest = "im a trigger of bus error";
	if (dest && src)
	{
		while (src)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}
