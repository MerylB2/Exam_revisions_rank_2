/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:32:51 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 19:58:14 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	char	c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				c += 13;
			else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
				c -= 13;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// This program takes a string as an argument and applies the ROT13 cipher to it.
// The ROT13 cipher is a simple letter substitution cipher that replaces a letter with the 13th letter after it in the alphabet.
// For example, 'a' becomes 'n', 'b' becomes 'o', and so on. The program handles both uppercase and lowercase letters. 
// If the input string contains any characters that are not letters, they are printed unchanged.
