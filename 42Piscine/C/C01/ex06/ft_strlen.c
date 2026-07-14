/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 07:22:36 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/17 07:59:25 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Apenas para os testes!

int		ft_strlen(char *str);
/*
int		main(void)
{
	char string[] = "Lucas";
	int qt_c = ft_strlen(string);
	printf("Numero de caracteres na string: %d\n", qt_c);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	char	c;
	int		num_c;
	int		auxiliar;

	c = str[0];
	num_c = 0;
	auxiliar = 0;
	while (c != '\0')
	{
		num_c++;
		c = str[auxiliar];
		auxiliar++;
	}	
	if (num_c == 0)
	{
		return (0);
	}
	return (num_c - 1);
}
