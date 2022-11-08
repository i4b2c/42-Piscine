/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:15:53 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/13 16:12:34 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;
	int	total;

	if (min >= max)
		return (0);
	total = max - min;
	p = (int *)malloc(total * sizeof(int));
	if (!p)
		return (-1);
	i = 0;
	*range = p;
	while (i < total)
	{
		p[i] = min + i;
		i++;
	}
	return (total);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

}*/
