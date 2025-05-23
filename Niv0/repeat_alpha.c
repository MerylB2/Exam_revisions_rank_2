/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:28:42 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 18:25:12 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	repeat;
	int	alpha;

	alpha = 0;
	if (ac == 2)
	{
		while (av[1][alpha])
		{
			repeat = 1;
			if (av[1][alpha] >= 'a' && av[1][alpha] <= 'z')
				repeat = av[1][alpha] - 'a' + 1;
			else if (av[1][alpha] >= 'A' && av[1][alpha] <= 'Z')
				repeat = av[1][alpha] - 'A' + 1;
			while (repeat >= 1)
			{
				write(1, &av[1][alpha], 1);
				repeat--;
			}
			alpha++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
