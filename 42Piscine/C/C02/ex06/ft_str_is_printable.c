/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:02:57 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/20 14:47:42 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);
/*
#include <stdio.h>

int     main(void)
{
        char    string1[] = "Tudo imprimivel";
        char    string2[] = "\\n \n";
        char    string3[] = "Imprimivel e \\n\n";
                
        printf("\n");
        printf("Em string com apenas caracteres imprimiveis o Retorno é 1. \
Em casos que não, o Retorno é 0\n");
        printf("String 1: %s\n \
		Retorno: %d\n", string1, ft_str_is_printable(string1));
        printf("String 2: %s\n \
		Retorno: %d\n", string2, ft_str_is_printable(string2));
        printf("String 3: %s\n \
		Retorno: %d\n", string3, ft_str_is_printable(string3));
        printf("\n");
        return (0);
}
*/

int	ft_str_is_printable(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{		
		if ((int)str[pos] < 32)
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
