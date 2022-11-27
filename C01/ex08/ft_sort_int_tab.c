/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:18:17 by icaldas           #+#    #+#             */
/*   Updated: 2022/09/28 13:57:19 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	new;

	i = 0;
	while (i < size)
	{
		new = 0;
		while (new < size - i - 1)
		{
			if (tab[new] > tab[new + 1])
				swap(&tab[new], &tab[new + 1]);
			new++ ;
		}
		i++ ;
	}
}
