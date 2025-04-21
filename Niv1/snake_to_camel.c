/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:45:21 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 19:58:32 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char   c;

    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (c == '_')
                c = av[1][++i] - 32;
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// This program takes a string in snake_case format as an argument and converts it to camelCase format.
// The program iterates through each character of the input string.
// If it encounters an underscore ('_'), it skips the underscore and converts the next character to uppercase.
// The program prints the modified string in camelCase format.
// If the input string contains any characters that are not letters or underscores, they are printed unchanged.
// The program ends by printing a newline character.
