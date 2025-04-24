/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:23:26 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/04/24 11:50:28 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	char	*temp = s1;

	while (*s2 && *s1)
	{
		if (*s1 == *s2++)
			s1++;
	}
	if (!*s1)
	{
		while(*temp)
			write(1, temp++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
