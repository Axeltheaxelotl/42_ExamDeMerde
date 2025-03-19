/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:03 by alanty            #+#    #+#             */
/*   Updated: 2024/04/10 14:02:28 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (str[i] == ' ' ||  (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}	
	else if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		write(1, "-2147483674\0", 13);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}



int main(int argc, char **argv)
{
	int i = 1;
	int nbr;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	nbr = ft_atoi(argv[1]);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1 , " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(i * nbr);
		write(1, "\n", 1);
		i++;

	}
	return 0;
}


