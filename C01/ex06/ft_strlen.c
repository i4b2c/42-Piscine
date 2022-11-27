/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:24:20 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 13:51:04 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contagem;
	int	carc;

	carc = 0;
	contagem = 0;
	while (str [carc] != '\0')
	{
		contagem++;
		carc++;
	}
	return (contagem);
}
