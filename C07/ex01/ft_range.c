/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:32:57 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/13 16:16:52 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
		return (0);
	p = (int *)malloc((max - min) * sizeof(int));
	if (!p)
		return (0);
	i = 0;
	while ((min + i) < max)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
/*

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = -10;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
