/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:43:38 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/18 07:48:59 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);
/*
int main(void)
{
	ft_putstr("Teste incrivel e sem acento\n");
	return (0);
}
*/

void	ft_putstr(char *str)
{
	int		tam;
	char	letra;

	letra = 'A';
	tam = 0;
	while (letra != '\0' || tam == 0)
	{
		letra = str[tam];
		write(1, &letra, 1);
		tam++;
	}
}
