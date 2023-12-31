/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/20 15:25:07 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(void *n)
{
	int	len;

	ft_putstr("0x");
	len = 2;
	if (!n)
	{
		len += write (1, "0", 1);
		return (len);
	}
	len += ft_putptr_hex((unsigned long long)n, 'x');
	return (len);
}
/*
#include <stdio.h>
int	main()
{
	char c[] = "Hello";
//	int	x = write(1, "2d123", 5);
	int	x = ft_putptr(c);
	printf("__");
	printf("%p", c);
	printf("%d\n", x);
}
*/
