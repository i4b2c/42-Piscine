/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:36:38 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 13:57:05 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 2;
	if (nb >= 2)
	{
		while ((i * i) <= nb)
		{
			if ((i * i) == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int i,x;
	i = 160;
	x = ft_sqrt(i);
	printf("%d",x);
}*/
