/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:59:58 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 19:07:19 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
	int i = 0;
	
	if (n == 0)
		return 0;
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

