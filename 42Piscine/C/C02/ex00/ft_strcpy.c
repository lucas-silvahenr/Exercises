/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:07:53 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/21 06:53:28 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	source[] = "Essa String deve ser copiada";
	int	size_source = sizeof(source) / sizeof(source[0]);
	char	dest_funcOriginal[size_source];
	char	dest_ft[size_source];
	
	printf("\n");
	printf("Conteudo do source: %s\n", source);
	printf("Contedo do dest_funcOriginal: %s\n", dest_funcOriginal);
	printf("Conteudo do dest_ft: %s\n", dest_ft);

	strcpy(dest_funcOriginal, source);
	ft_strcpy(dest_ft, source);
	
	printf("\n");
	printf("Conteudo do source: %s\n", source);
	printf("Contedo do dest_funcOriginal: %s\n", dest_funcOriginal);
	printf("Conteudo do dest_ft: %s\n", dest_ft);


	printf("\n");
	return (0);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
