/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:26:54 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/16 15:40:38 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> // Apenas para testes!

void	ft_ultimate_div_mod(int *a, int *b);
/*
int main(void)
{
	int num1, num2;
	num1 = 22;
	num2 = 4;
	printf("Valor originais: A - %d, B - %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Valores depois da troca: A - %d, B - %d\n", num1, num2);
	return(0);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
