/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:53:10 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/20 14:51:38 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);
/*
#include <stdio.h>

int     main(void)
{
        char    string1[] = "MAIUSCULO";
        char    string2[] = "minusculo";
        char    string3[] = "MiStUrAdO";
            
        printf("\n");
        printf("Em string com apenas maiusculas \
o Retorno é 1. Em casos de haver minusculas, o Retorno é 0\n");
        printf("String 1: %s\nRetorno: %d\n", string1, \
		ft_str_is_uppercase(string1));
        printf("String 2: %s\nRetorno: %d\n", string2, \
		ft_str_is_uppercase(string2));
        printf("String 3: %s\nRetorno: %d\n", string3, \
		ft_str_is_uppercase(string3));
        printf("\n");
        return (0);
}
*/

int	ft_str_is_uppercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (!(str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
