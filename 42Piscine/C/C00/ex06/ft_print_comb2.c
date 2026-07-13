/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 07:36:40 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/22 11:04:18 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb2(void);
void	transform_and_write(int num1, int num2, int num3, int num4);

/*
Sao quatro algarismos no total: XX XX

O primeiro par dita o avalor incial do segundo
Exemplo: se o primeiro par inicia em 06, o segundo comecara a contar em 07

O valor do primeiro par apenas muda após o segundo alcancar 99.
00 01 .. 00 99 > 01 02

*/
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;
	
	num1 = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;
	while (num1 <= 9)
	{
		while (num2 <= 9) // Tem que se mover ate da 9 para o anterior mudar
		{
			while (num3 <= 9) // Tem que se mover ate da 9 para o anterior mudar
			{
				while (num4 <= 9) // Tem que se mover ate da 9 para o anterior mudar
				{
					transform_and_write(num1, num2, num3, num4);
					num4++;
				}
			num4 = 0; // Apos alcancar 9. o num4 zera para conseguir repetir 0-9
			num3++;
			}
		num3 = 0;
		num2++;
		}
	num2 = 0;
	num1++;
	}
}

void	transform_and_write(int	num1, int num2, int num3, int num4)
{
	int	nt1;
	int	nt2;
	int	nt3;
	int	nt4;

	nt1 = num1 + '0';
	nt2 = num2 + '0';
	nt3 = num3 + '0';
	nt4 = num4 + '0';
	if ((((int)num1 * (int)num2) < ((int)num3 * (int)num4)) && (num3 >= num1
&& num4 > num2))
//00 01 00 02
	{
		write(1, &nt1, 1);
		write(1, &nt2, 1);
		write(1, " ", 1);
		write(1, &nt3, 1);
		write(1, &nt4, 1);
	if (num1 + num2 + num3 + num4 < 35)
		{
			write(1, ", ", 2);
		}
	}
}
//(num3 >= num1 && num4 > num2)
/*
void	looping(int num)
{
	while (num <= 9)
	{
		looping(num)
		num++;
	}
}
*/


