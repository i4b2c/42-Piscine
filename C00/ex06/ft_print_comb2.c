/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:09:58 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/25 13:51:37 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_func(char a)
{
	write(1, &a, 1);
}

void	put_char(int a, int b)
{
	write_func('0' + a / 10);
	write_func('0' + a % 10);
	write(1, " ", 1);
	write_func('0' + b / 10);
	write_func('0' + b % 10);
	if (! (a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_char(a, b);
			b++;
		}
		a++;
	}
}
