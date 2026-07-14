/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:10:58 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/16 15:26:14 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> // Apenas para testes!
void	ft_div_mod(int a, int b, int *div, int *mod);

/*int main(void)
{
	int num1, num2, r_div, r_resto;
	num1 = 22;
	num2 = 4;
	printf("Numeros: A - %d  B - %d\n", num1, num2);
	ft_div_mod(num1, num2, &r_div, &r_resto);
	printf("Resultado da divisao (A/B): %d\n", r_div);
	printf("Resultado do resto da divisao: %d\n", r_resto);
	return(0);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
