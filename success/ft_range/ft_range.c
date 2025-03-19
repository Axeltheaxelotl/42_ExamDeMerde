/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:58:34 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 17:06:42 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int *result;

	if (start > end)
		result = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		result = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		result[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	result[i] = start;
	return result;
}
