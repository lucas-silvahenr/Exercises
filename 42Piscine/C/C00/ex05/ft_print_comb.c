/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:32:28 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/22 07:26:44 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	transform_and_write(int num1, int num2, int num3);
/*
int	main(void)
{
	ft_print_comb();
	//write(1, "\n", 1);
	return (0);
}
*/

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	num2 = 1;
	num3 = 2;
	while (num1 <= 7)
	{
		while (num2 <= 8)
		{
			while (num3 <= 9)
			{
				transform_and_write(num1, num2, num3);
				num3++;
			}
			num3 = num2 + 1;
			num2++;
		}
		num2 = num1 + 1;
		num1++;
	}
}

void	transform_and_write(int num1, int num2, int num3)
{
	int	nt1;
	int	nt2;
	int	nt3;

	nt1 = num1 + '0';
	nt2 = num2 + '0';
	nt3 = num3 + '0';
	if ((num1 + num2 + num3) <= 24 && num1 != num2 && num2 != num3)
	{
		write(1, &nt1, 1);
		write(1, &nt2, 1);
		write(1, &nt3, 1);
		if ((num1 + num2 + num3) <= 23)
		{
			write(1, ", ", 2);
		}
	}
}
