/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:40:27 by icaldas           #+#    #+#             */
/*   Updated: 2022/09/29 13:26:26 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int main()
{
	int i;
	char str[] = "";

	i = ft_str_is_numeric(str);
	printf("%d",i);
	return 0;
}*/
