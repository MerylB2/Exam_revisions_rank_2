/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:23:31 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 16:56:40 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// main.c
#include <stdio.h>

int main(void)
{
    char source[] = "Hello, world!";
    char destination[50];  // Make sure it's large enough to hold the source

    ft_strcpy(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
