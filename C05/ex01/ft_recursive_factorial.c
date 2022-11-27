/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:24:00 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/05 18:26:46 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
		nb--;
	}
	if (nb < 0)
		return (0);
	return (x);
}
/*
#include <stdio.h>

int main(void)
{
	int i,x;
	i = 12;
	x = ft_recursive_factorial(i);
	printf("%d",x);
	return 0;
}*/
