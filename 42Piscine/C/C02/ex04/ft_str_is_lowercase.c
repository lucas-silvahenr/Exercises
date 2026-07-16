/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:45:11 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/20 14:52:09 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

/*
#include <stdio.h>

int	main(void)
{
	char	string1[] = "letras";
	char	string2[] = "Letras";
	char	string3[] = "letras10";
	
	printf("\n");
	printf("Em string com apenas alfabeticos minusculos \
o Retorno é 1. Em outros casos o Retorno é 0\n");
	printf("String 1: %s\nRetorno: %d\n", string1, ft_str_is_lowercase(string1));
	printf("String 2: %s\nRetorno: %d\n", string2, ft_str_is_lowercase(string2));
	printf("String 3: %s\nRetorno: %d\n", string3, ft_str_is_lowercase(string3));
	printf("\n");
	
	return (0);
}
*/

int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{	
		if (!(str[pos] >= 'a' && str[pos] <= 'z'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
