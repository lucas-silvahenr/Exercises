/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 09:58:28 by lucahenr          #+#    #+#             */
/*   Updated: 2026/02/02 10:14:27 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	ft_isspace(char c);
int	is_alpha_or_num(char c);
int	mult(char *str, int num);
/*
#include <stdio.h>
int main(void)
{
	int num = ft_atoi("123-123");
	printf("Valor: %d\n", num);
	return (0);
}
*/

int	ft_atoi(char *str)
{
	int	num;
	int	index;

	num = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (is_alpha_or_num(str[index]) == 1)
			break ;
		if (index != 0 && ft_isspace(str[index])
			&& is_alpha_or_num(str[index -1]) != 0)
			break ;
		if (index != 0 && is_alpha_or_num(str[index]) != 2
			&& is_alpha_or_num(str[index - 1]) == 2)
			break ;
		if (ft_isspace(str[index]) || str[index] == '-' || str[index] == '+')
		{
			index++;
			continue ;
		}
		num = (num * 10) + (str[index] - '0');
		index++;
	}
	return (mult(str, num));
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f'
		|| c == '\v' || c == '\r' || c == '\n')
		return (1);
	return (0);
}

int	is_alpha_or_num(char c)
{
	int	ascii_c;

	ascii_c = (int)c;
	if ((ascii_c >= 97 && ascii_c <= 122) || (ascii_c >= 65 && ascii_c <= 90))
		return (1);
	if (ascii_c >= 48 && ascii_c <= 57)
		return (2);
	return (0);
}

int	mult(char *str, int num)
{
	int	index;
	int	hifens;

	index = 0;
	hifens = 0;
	while (str[index] != '\0' && is_alpha_or_num(str[index]) == 0)
	{
		if (str[index] == '-')
			hifens++;
		index++;
	}
	if (hifens % 2 == 1)
		return (num * -1);
	return (num);
}
