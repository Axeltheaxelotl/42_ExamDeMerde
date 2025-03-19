/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:11:18 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 18:30:39 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648\0");
	int n = nbr;
	int len = 0;

	if (nbr <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return NULL;
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return result;
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	int i = len - 1;
	while (nbr != 0)
	{
		result[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return result;
}
