/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:40:27 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/05 18:27:01 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
		power--;
	}
	return (x);
}
/*
#include <stdio.h>

int main()
{
	int nb,power;
	nb = 5;
	power = 3;
	printf("%d",ft_recursive_power(nb,power));
	return 0;
}*/
