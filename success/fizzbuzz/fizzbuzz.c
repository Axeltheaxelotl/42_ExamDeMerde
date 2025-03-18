/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:51:37 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 15:05:19 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write_nombre(int nbr)
{
	char str[10] = "0123456789";
	if (nbr > 9)
		ft_write_nombre(nbr / 10);
	write (1, &str[nbr % 10], 1);
}


int main(int argc, char **argv)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
                {
                        write(1, "fizzbuzz", 8);
                }
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			ft_write_nombre(i);
		i++;
		write(1, "\n", 1);
	}
	return 0;
}

