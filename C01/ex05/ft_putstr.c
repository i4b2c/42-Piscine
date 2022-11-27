/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:09:44 by icaldas           #+#    #+#             */
/*   Updated: 2022/09/26 16:14:49 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	caracteres;

	caracteres = 0;
	while (str [caracteres] != '\0')
	{
		ft_putchar(str[caracteres]);
		caracteres++;
	}
}
