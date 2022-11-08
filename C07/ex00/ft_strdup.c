/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:55:15 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/12 13:39:58 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;
	char	*pont;

	i = 0;
	p = (char *)malloc(ft_len(src) + 1 * sizeof(char));
	if (p == 0)
		return (0);
	pont = p;
	while (src[i] != '\0')
	{
		pont[i] = src[i];
		i++;
	}
	pont[i] = '\0';
	return (p);
}
/*
int main(void)
{
	char str[] = "ola como vais , sem nada a mais";
	char *b;
	b = ft_strdup(str);
	printf("%s",b);
}*/
