/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:21:51 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/26 13:04:32 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	charcmp(char c1, char c2);
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	string1[] = "Hello";
	char	string2[] = "hELLO";
	unsigned int	n = 3;

	int	rt_og = strncmp(string1, string2, n);
	int rt_ft = ft_strncmp(string1, string2, n);

	printf("\nRetorno da func original: %d\n", rt_og);
	printf("Retorno da func ft: %d\n", rt_ft);
	return (0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				rtn;

	index = 0;
	rtn = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if (s1[index] != s2[index])
		{
			return (charcmp(s1[index], s2[index]));
		}
	index++;
	}
	return (rtn);
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
