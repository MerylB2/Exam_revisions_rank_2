/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:56:46 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 19:58:47 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 && (*s1 == *s2))
			s1++;
		s2++;
	}
	if (!*s1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// This program takes two strings as arguments and checks if the second string is a hidden substring of the first string.
// A hidden substring is defined as a substring that can be formed by deleting some characters from the first string without changing the order of the remaining characters.
// The program iterates through each character of the first string and compares it with the characters of the second string.
// If a character in the first string matches a character in the second string, it moves to the next character in the second string.
// If all characters of the second string are found in the first string in order, it prints "1" (true).
// If not, it prints "0" (false).