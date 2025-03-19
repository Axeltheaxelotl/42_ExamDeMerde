/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:12:47 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 15:55:16 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	return c;
}


int obtenir_chiffre(char c, int digits_in_base)
{
	int chiffre_max;
	if (digits_in_base <= 10)
		chiffre_max = digits_in_base + '0';
	else
		chiffre_max = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= chiffre_max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= chiffre_max)
		return (10 + c - 'a');
	else
		return -1;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		int chiffre = obtenir_chiffre(to_lower(str[i]), str_base);
		if (chiffre < 0)
			break;
		result = result * str_base + (chiffre * sign);
		i++;
	}
	return result;
}


