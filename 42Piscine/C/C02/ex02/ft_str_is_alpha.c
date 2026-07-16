/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:53:57 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/20 14:53:44 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

/*
#include <stdio.h>

int	main(void)
{
	char	string1[] = "Letras";
	char	string2[] = "0123456789";
	char	string3[] = "Mistureba 10";
	
	printf("\n");
	printf("Em string com apenas alfabeticos o \
Retorno é 1. Em casos de haver nao alfabeticos, o Retorno é 0\n");
	printf("String 1: %s\nRetorno: %d\n", string1, ft_str_is_alpha(string1));
	printf("String 2: %s\nRetorno: %d\n", string2, ft_str_is_alpha(string2));
	printf("String 3: %s\nRetorno: %d\n", string3, ft_str_is_alpha(string3));
	printf("\n");	
	return (0);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{	
		if (!((str[pos] >= 'A' && str[pos] <= 'Z') || (str[pos] >= 'a'
					&& str[pos] <= 'z')))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
