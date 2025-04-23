/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:12:40 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 21:04:31 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '*')
			printf("%d\n", atoi(av[1]) * atoi(av[3]));
		if (av[2][0] == '+')
			printf("%d\n", atoi(av[1]) + atoi(av[3]));
		if (av[2][0] == '-')
			printf("%d\n", atoi(av[1]) - atoi(av[3]));
		if (av[2][0] == '/')
			printf("%d\n", atoi(av[1]) / atoi(av[3]));
		if (av[2][0] == '%')
			printf("%d\n", atoi(av[1]) % atoi(av[3]));
	}
	else
		write(1, "\n", 1);
	return (0);
}