/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:30:51 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 13:53:16 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] <= 'Z' && str[i] >= 'A')
		|| (str[i] <= 'z' && str[i] >= 'a'))
		i++;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	int i;
	char str[] = "akjsdaksnbd";
	i = ft_str_is_alpha(str);
	printf("%d",i);
	return 0;
}*/
