/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:25:19 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/26 10:13:47 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int		is_printable(char c);
/*
#include <stdio.h>

int	main(void)
{
        char    string[] = "Hello\nHow are you?";
	ft_putstr_non_printable(string);
	printf("\n");


	return (0);
}
*/

void	ft_putstr_non_printable(char *str)
{
	int		pos;
	int		div;
	int		mod;
	char	*hex;

	hex = "0123456789abcdef";
	pos = 0;
	while (str[pos] != '\0')
	{
		if (is_printable(str[pos]))
		{
			write(1, &str[pos], 1);
		}
		else
		{
			div = (int)str[pos] / 16;
			mod = (int)str[pos] % 16;
			write(1, "\\", 1);
			write(1, &hex[div], 1);
			write(1, &hex[mod], 1);
		}
	pos++;
	}
}

int	is_printable(char c)
{
	if (c < 32)
	{
		return (0);
	}
	return (1);
}
