/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:09:18 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 13:54:32 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
int main()
{
	int i;
	char str[] = "asdasd sadaasds";

	i = ft_str_is_printable(str);
	printf("%d",i);
	return 0;
}*/
