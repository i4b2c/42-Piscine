/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:32:44 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/11 14:55:05 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lens;
	unsigned int	lend;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
		j++;
	lend = j;
	lens = ft_len(src);
	if (size == 0 || size <= lend)
		return (lens + size);
	while (src[i] != '\0' && i < size - lend - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lend + lens);
}
/*
#include <stdio.h>
int main(void)
{
	char str[]="ola";
	char dest[]="sim";
	int size = 5;
	printf("%d",ft_strlcat(dest,str,size));
}
*/
