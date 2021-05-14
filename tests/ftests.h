/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftests.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 02:19:19 by dainoue           #+#    #+#             */
/*   Updated: 2021/05/15 02:48:19 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTESTS_H
# define FTESTS_H

# include "../framework/libunit.h"

char	*strcpy_ok(char *dest, const char *src);
char	*strcpy_ko(char *dest, const char *src);
char	*strcpy_seg(char *dest, const char *src);
char	*strcpy_bus(char *dest, const char *src);

#endif
