/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:53:02 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 13:54:52 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while ((src[++i] != '\0') && (i < n))
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char src[] = "Hello1";
	char dest[] = "Nataliaaaaa";
	unsigned int n;

	n = 8;
	ft_strncpy(dest, src, n);
	printf("%s",dest);
}*/
