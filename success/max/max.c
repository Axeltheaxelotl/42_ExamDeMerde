/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:05:58 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 12:10:47 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int* tab, unsigned int len)
{
	int i = 0;
	int plus_grand_nbr = tab[0];

	if(len == 0)
		return 0;
	while (i < len)
	{
		if (tab[i] > plus_grand_nbr)
			plus_grand_nbr = tab[i];
		i++;
	}
	return(plus_grand_nbr);
}
