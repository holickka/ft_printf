/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:58:23 by hsim              #+#    #+#             */
/*   Updated: 2023/11/20 15:24:36 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putnbr_ux(unsigned int n, char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putptr(void *n);
int		ft_putptr_hex(unsigned long long n, char c);
size_t	ft_strlen(const char *s);

#endif
