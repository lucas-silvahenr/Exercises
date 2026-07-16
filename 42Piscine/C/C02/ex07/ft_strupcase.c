/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:43:34 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/20 13:34:26 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

/*
#include <stdio.h>

int main(void)
{
	char string[] = "grande Teste";
	printf("\nString Original: %s\n", string);
	ft_strupcase(string);
	printf("\nMesma string depois da func: %s\n", string);
	return(0);
}
*/
char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ((int)str[pos] >= 97 && (int)str[pos] <= 122)
		{
			str[pos] = ((int)str[pos] - 32);
		}
		pos++;
	}
	return (str);
}
