/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 07:37:44 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/18 07:57:42 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> // Apenas para os testes !!!!!
void	ft_rev_int_tab(int *tab, int size);
//void	print_array(int *array, int len);

/*
int	main(void)
{
	int elementos[] = {1, 3, 5, 7, 11, 13};
	printf("Elementos originais:\n");
	print_array(elementos, (sizeof(elementos)/sizeof(elementos[0])));
	ft_rev_int_tab(elementos, (sizeof(elementos)/sizeof(elementos[0])));
	printf("Elementos após a troca:\n");
	print_array(elementos, (sizeof(elementos)/sizeof(elementos[0])));
	return(0);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	times;
	int	aux;

	pos = 0;
	times = size / 2;
	size -= 1;
	aux = *tab;
	while (times > 0)
	{
		aux = *(tab + pos);
		*(tab + pos) = *(tab + size);
		*(tab + size) = aux;
		pos++;
		times--;
		size--;
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
