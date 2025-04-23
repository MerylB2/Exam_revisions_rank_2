/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:59:11 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 17:04:24 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

// main
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("bonjour"));
	return (0);
}