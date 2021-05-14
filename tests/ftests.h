/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftests.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 02:19:19 by dainoue           #+#    #+#             */
/*   Updated: 2021/05/15 03:35:17 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTESTS_H
# define FTESTS_H

# include "../framework/libunit.h"

char	*strcpy_ok(char *dest, const char *src);
char	*strcpy_ko(char *dest, const char *src);
char	*strcpy_seg(char *dest, const char *src);
char	*strcpy_bus(char *dest, const char *src);
int		strcpy_launcher(void);
int		strcpy_ok_test(void);
int		strcpy_ko_test(void);
int		strcpy_seg_test(void);
int		strcpy_bus_test(void);
#endif
