/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:59:31 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/26 08:26:28 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcapitalize(char *str);
int		identify_char(char c);
char	char_lower(char c);
char	char_upper(char c);

/*#include <stdio.h>
int	main(void)
{
	char string[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("String original: %s\n", string);
	ft_strcapitalize(string);
	printf("String apos operacao: %s\n", string);
	return (0);
}
*/

char	ft_strcapitalize(char *str)
{
	int		index;
	char	*current_char;

	index = 0;
	current_char = &str[0];
	while (str[index] != '\0')
	{
		current_char = &str[index];
		if (identify_char(*current_char) == 1)
		{
			if (index == 0 || identify_char(str[index - 1]) == 0)
			{
				*current_char = char_upper(*current_char);
			}
		}
		else if (identify_char(*current_char) == 2)
		{
			if (index != 0)
			{
				*current_char = char_lower(*current_char);
			}
		}
	index++;
	}
	return (*str);
}

int	identify_char(char c)
{
	int	ascii_c;

	ascii_c = (int)c;
	if (ascii_c >= 97 && ascii_c <= 122)
	{
		return (1);
	}
	if (ascii_c >= 65 && ascii_c <= 90)
	{
		return (2);
	}
	if (ascii_c >= 48 && ascii_c <= 57)
	{
		return (3);
	}
	return (0);
}

char	char_upper(char c)
{
	return (c -= 32);
}

char	char_lower(char c)
{
	return (c += 32);
}
