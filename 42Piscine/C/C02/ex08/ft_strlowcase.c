/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:55:18 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/20 13:35:27 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

/*
#include <stdio.h>
int main(void)
{
	char string[] = "PESQUENO tESTE";
	printf("\nString Original: %s\n", string);
	ft_strlowcase(string);
	printf("\nMesma string depois da func: %s\n", string);
	return(0);
}
*/
char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ((int)str[pos] >= 65 && (int)str[pos] <= 90)
		{
			str[pos] = ((int)str[pos] + 32);
		}
		pos++;
	}
	return (str);
}
