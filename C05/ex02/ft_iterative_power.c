/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:13:21 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/04 18:14:36 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		x *= nb;
		power--;
	}
	return (x);
}
/*
#include <stdio.h>
int main(void)
{
	int nb,power;
	nb = 5;
	power = 2;
	printf("%d", ft_iterative_power(nb,power));
	return 0;
}*/
