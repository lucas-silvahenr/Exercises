/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:18:02 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/28 07:51:25 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/*
// AVISO PARA O AVALIADOR: compile com a flag -lbsd no final 
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	string_og[] = "Hello";
	char	string_ft[] = "Hello";
	char	string2[] = "Mundo";
	unsigned size =	10;
	int rt_o;
	int rt_ft;
	
	rt_o = strlcat(string_og, string2, size);
	rt_ft = ft_strlcat(string_ft, string2, size);
	printf("\nRetorno do strlcat: %d\n", rt_o);
	printf("Retorno do ft_strlcat: %d\n\n", rt_ft);
	return (0);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[index2] != '\0' && index2 < size)
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
	return (index2 + index);
}
