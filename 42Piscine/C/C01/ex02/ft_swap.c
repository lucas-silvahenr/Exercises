/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:48:47 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/16 15:10:20 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Apenas para os testes!

void	ft_swap(int *a, int *b);
/*
int main(void)
{
	int num1, num2;
	num1 = 10;
	num2 = 42;
	printf("Numeros Original: Num1 - %d  Num2 - %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Numeros Trocados: Num1 - %d  Num2 - %d\n", num1, num2);

	return(0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
