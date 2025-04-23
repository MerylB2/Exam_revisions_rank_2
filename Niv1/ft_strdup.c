/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:23:05 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 22:33:21 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i = 0;
	int		len = 0;

	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Before dup ->: %s\n", av[1]);
		printf("After dup ->: %s\n", ft_strdup(av[1]));
	}
	else
		printf("\n");
	return (0);
}