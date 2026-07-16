/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:14:35 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/26 08:28:56 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "String a ser copiada";
	int	n = 6;

	int	size_source = sizeof(source) / sizeof(source[0]);
	char	dest_ft[size_source];
	char	dest_org[size_source];
	char	*rtn_ft;
	char	*func_original;

	rtn_ft = ft_strncpy(dest_ft, source, n);
	printf("\nResultado com ft_strncpy: %s\n", rtn_ft);
	printf("\n");
	func_original = strncpy(dest_org, source, n);
	printf("Resultado com a funcao original: %s\n", func_original);	
	printf("\n");
	return (0);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
