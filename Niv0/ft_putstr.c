/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:12:22 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 16:21:44 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(void)
{
	ft_putstr("bonjour\n");
	return (0);
}