/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:05:04 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/28 07:53:03 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	string[] = "Hello";
	char	string2[] = "World";

	printf("String concatenada: %s\n", ft_strcat(string, string2));
}
*/

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[index2] != '\0')
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
	return (dest);
}
