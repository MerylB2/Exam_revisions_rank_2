/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:56:46 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 19:15:33 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	hidenp(char *s1, char *s2)
// {
// 	while (*s2)
// 	{
// 		if (*s1 && (*s1 == *s2))
// 			s1++;
// 		s2++;
// 	}
// 	if (!*s1)
// 		write(1, "1", 1);
// 	else
// 		write(1, "0", 1);
// }

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		hidenp(av[1], av[2]);
// 	write(1, "\n", 1);
// 	return (0);
// }

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		while (av[1][i])
		{
			i = 0;
			j = 0;
		
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	
}