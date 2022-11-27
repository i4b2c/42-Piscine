/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:34:47 by icaldas           #+#    #+#             */
/*   Updated: 2022/10/12 19:22:56 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_len(strs[i]);
		i++;
	}
	len += ft_len(sep) * (size - 1);
	return (len);
}

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	char	*pont;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	p = (char *)malloc(total_len(size, strs, sep) + 1 * sizeof (char));
	if (p == 0)
		return (0);
	pont = p;
	i = 0;
	while (i < size)
	{
		ft_strcpy(pont, strs[i]);
		pont += ft_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(pont, sep);
			pont += ft_len(sep);
		}
		i++;
	}
	*pont = '\0';
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	char *sep;
	sep = "";
	printf("%s",ft_strjoin(ac,av,sep));
	return (0);
}*/
