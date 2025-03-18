/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:44:46 by alanty            #+#    #+#             */
/*   Updated: 2024/04/08 17:50:35 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int iter(char *str, char c, int len);

int iter(char *str, char c, int len)
{
	int i = 0;
	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return 1;
	return 0;
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
