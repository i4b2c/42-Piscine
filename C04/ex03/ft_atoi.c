/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:47:11 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 13:56:10 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	espaco(char *str, int *x)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	while ((str[i] && str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	*x = i;
	return (c);
}

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	res;

	i = 0;
	x = espaco(str, &i);
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res * x);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_atoi("		--9a8213"));
	return 0;
}*/
