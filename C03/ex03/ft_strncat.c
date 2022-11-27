/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:46:20 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/03 18:12:12 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0 && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "sim";
	char str1[] = "missssss";
	char *a,*b;
	unsigned int nb;
	nb = 7;
	a = str;
	b = str1;
	printf("%s",ft_strncat(a,b,nb));
}*/
