/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 08:30:20 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/17 09:45:16 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
/*
int main(void) 
{
	ft_is_negative(-1);
	return(0);
}
*/

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
