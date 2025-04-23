/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:24:58 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 21:41:04 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	res1;
	int	res2;

	if (argc == 3)
	{
		res1 = strcmp(argv[1], argv[2]);
		res2 = ft_strcmp(argv[1], argv[2]);
		printf("strcmp ->: %d\n", res1);
		printf("ft_strcmp ->: %d\n", res2);
	}
	else
		printf("\n");
	return (0);
}
