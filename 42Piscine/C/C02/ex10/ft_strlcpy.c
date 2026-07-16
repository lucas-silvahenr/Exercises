/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:14:35 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/22 14:44:05 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*
// Para compilar esse arquivo precisa usar -lbsd no final
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	source[] = "Hello, World!";
	char	dest_org[10];
	char	dest_ft[10];
	size_t return_len = strlcpy(dest_org, source, sizeof(dest_org));
	
	printf("\n");
	printf("Retorno da func original: %zu\n", return_len);
	printf("Retorno da ft_strlcpy: %d\n", ft_strlcpy(dest_ft, source, 10));
	printf("\n");

	return (0);
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	index;

	index = 0;
	while (index < (size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index + 1] = '\0';
	index = 0;
	while (src[index])
	{
	index++;
	}
	return (index);
}
