/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:43:23 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/02 16:17:33 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	temp;

	x = 0;
	while (x < size / 2)
	{
		temp = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = temp;
		x++;
	}
}
