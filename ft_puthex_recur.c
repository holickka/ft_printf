/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_recur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/13 21:27:29 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char c)
{
	int		len;

	len = 0;
	if (n >= 16)
	{
		len += ft_puthex(n / 16, c);
		len += ft_puthex(n % 16, c);
	}
	if (n >= 10 && n <= 15 && c == 'x')
	{
		return (len += ft_putchar(n - 10 + 'a'));
	}
	else if (n >= 10 && n <= 15 && c == 'X')
	{
		return (len += ft_putchar(n - 10 + 'A'));
	}
	if (n >= 0 && n <= 9)
	{
		n += '0';
		return (len += ft_putchar(n));
	}
	return (len);
}

#include <stdio.h>
int	main()
{
	int	y = ft_puthex(-1999, 'x');
//	int	x = 1999;	
//	int y = printf("%x", x);
	printf("\n");
	printf("%d\n", y);
}