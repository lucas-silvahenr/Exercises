/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:01:31 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/29 10:25:17 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "mistu Grande mistureba para testes";
	char	find[] = "mistureba";
	char	*strf = ft_strstr(str, find);
	printf("Output: %s\n", strf);
	
	return (0);
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	int		index;
	int		index2;
	char	*ptr;

	index = 0;
	index2 = 0;
	if (!to_find[0])
		return (&str[0]);
	while (str[index])
	{
		if (str[index] == to_find[index2])
		{
			ptr = &str[index];
			while (str[index] == to_find[index2])
			{
				if (!to_find[index2 + 1])
					return (ptr);
				index++;
				index2++;
			}
			index2 = 0;
		}
		index++;
	}
	return (0);
}
