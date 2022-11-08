/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:14:03 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/04 18:12:47 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	x;

	x = 1;
	while (nb > 0)
	{
		x *= nb;
	nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (x);
}
/*
#include <stdio.h>
int	main(void)
{
	int x;
	x = ft_iterative_factorial(5);
	printf("%d",x);
	return 0;
}*/
