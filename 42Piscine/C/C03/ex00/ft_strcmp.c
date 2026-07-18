/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 08:16:06 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/26 14:42:41 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2);
int	charcmp(char c1, char c2);
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	ret_original;
	int	ret_ft;
	char	string1[] = "A";
	char	string2[] = "B";

	ret_original = strcmp(string1, string2);
	ret_ft = ft_strcmp(string1, string2);
	
	printf("\n");
	printf("Retorno da func original: %d\n", ret_original);
	printf("Retorno da func ft: %d\n", ret_ft);
	printf("\n");
	return (0);
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (charcmp(s1[index], s2[index]));
		}		
		index++;
	}
	return (0);
}

int	charcmp(char c1, char c2)
{
	int	ascii_c1;
	int	ascii_c2;

	ascii_c1 = (int)c1;
	ascii_c2 = (int)c2;
	if (ascii_c1 > ascii_c2)
	{
		return (ascii_c1 - ascii_c2);
	}
	if (ascii_c2 > ascii_c1)
	{
		return ((ascii_c2 - ascii_c1) * -1);
	}
	return (0);
}
