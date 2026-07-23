/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:02:53 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/29 07:35:40 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
/*
#include <stdio.h>
int	main (void)
{
	char	string[] = "Cinco";
	int		len = ft_strlen(string);

	printf("Quantas letras %s tem? %d\n", string, len);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
