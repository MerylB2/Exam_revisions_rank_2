/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:02:35 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 14:32:14 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}


// int	is_space(char c)
// {
// 	if ( c == ' ' || c == '\t')
// 		return (1);
// 	return (0);
// }

// int	main(int ac, char **av)
// {
// 	int	i;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		while (is_space(av[1][i]))
// 			i++;
// 		while (av[1][i] && !is_space(av[1][i]))
// 			write(1, &av[1][i++], 1);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }