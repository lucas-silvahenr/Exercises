/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:25:17 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/17 15:41:22 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h> // Apenas para testes!
void	print_array(int *arr, int len); // Apenas para testes!
*/

void	ft_sort_int_tab(int *tab, int size);

/*
int main(void)
{
	int elementos[] = {6, 1, 3, 4, 2};
	int tam = sizeof(elementos) / sizeof(elementos[0]);
	print_array(elementos, tam);
	ft_sort_int_tab(&elementos[0], tam);
	print_array(elementos, tam);
	return(0);
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	contador;
	int	i;
	int	temp1;
	int	temp2;

	contador = 0;
	i = 0;
	temp1 = 0;
	temp2 = 0;
	while (contador < size * size)
	{
		if (*(tab + i) > *(tab + i + 1) && *(tab + i) != *(tab + size - 1))
		{		
			temp1 = *(tab + i);
			temp2 = *(tab + i + 1);
			*(tab + i) = temp2;
			*(tab + i + 1) = temp1;
		}
		contador++;
		i++;
		if (i >= size)
		{
			i = 0;
		}
	}
}
/*
 void print_array(int *arr, int len) { // Apenas para os testes!!!!
	putchar('{');
	int i;
	for (i = 0; i < len - 1; i++)
	printf("%d, ", arr[i]);
	printf("%d}\n", arr[i]);
}
*/
