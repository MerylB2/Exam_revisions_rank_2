/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:27:14 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/04/24 12:38:27 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_union(char *s1, char *s2)
{
	int	tab[256] = {0};
	int	c;

	while (*s1 != '\0')
	{
		c = *s1;
		if (tab[c] == 0)
		{
			write(1, s1, 1);
			tab[c] = 1;
		}
		++s1;
	}
	while (*s2 != '\0')
	{
		c = *s2;
		if (tab[c] == 0)
		{
			write(1, s2, 1);
			tab[c] = 1;
		}
		++s2;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}