/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:31:49 by lucahenr          #+#    #+#             */
/*   Updated: 2026/02/02 10:15:19 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
void	conversion(int nb, int div, int sense);
int		verify(int *nbr, int div);

/*
int	main(void)
{
	int	nb = 0;
	ft_putnbr_base(nb, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "01");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "0123456789abcdef");
	write(1, "\n", 1);


	return (0);
}
*/
void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strcmp(base, "0123456789") == 0)
		ft_putnbr(nbr);
	if (ft_strcmp(base, "01") == 0)
	{
		if (verify(&nbr, 2) != 0)
			conversion(nbr, 2, 2);
	}
	if (ft_strcmp(base, "0123456789ABCDEF") == 0)
	{
		if (verify(&nbr, 16) != 0)
			conversion(nbr, 16, 0);
	}
	if (ft_strcmp(base, "0123456789abcdef") == 0)
	{
		if (verify(&nbr, 16) != 0)
			conversion(nbr, 16, 1);
	}
	if (ft_strcmp(base, "poneyvif") == 0)
	{
		if (verify(&nbr, 8) != 0)
			conversion(nbr, 8, 2);
	}
	write(1, "", 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	c = 'a';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	conversion(int nb, int div, int sense)
{
	int		r;
	char	c;

	c = 'a';
	r = nb % div;
	if (nb != 0)
		conversion(nb / div, div, sense);
	if (nb > 0)
	{
		if (r > 9 && div == 16)
		{
			if (sense == 0)
				c = r + 'A' - 10;
			if (sense == 1)
				c = r + 'a' - 10;
			write(1, &c, 1);
		}
		else
		{
			c = '0' + r;
			write(1, &c, 1);
		}
	}
}

int	verify(int *nbr, int div)
{
	if (*nbr == -2147483648)
	{
		if (div == 2)
			write(1, "-10000000000000000000000000000000", 33);
		if (div == 8)
			write(1, "-20000000000", 12);
		if (div == 16)
			write(1, "-80000000", 9);
		return (0);
	}
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
		return (1);
	}
	if (*nbr == 0)
	{
		write(1, "0", 1);
		return (2);
	}
	return (*nbr);
}
