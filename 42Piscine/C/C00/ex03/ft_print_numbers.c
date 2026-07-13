/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 08:05:40 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/15 12:07:05 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
/*
int main(void)
{
	ft_print_numbers();
};
*/

void	ft_print_numbers(void)
{
	char	digito;

	digito = '0';
	while (digito <= '9')
	{
		write(1, &digito, 1);
		digito++;
	}
}
