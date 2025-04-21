/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:30:51 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 22:41:33 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int res = 0;

	// while ((*str >= 9 && *str <= 13 )|| *str == 32)
	// 	str++;
	// if (*str == '-' || *str == '+')
	// {
	// 	if (*str == '-')
	// 		sign *= -1;
	// 	str++;
	// }
	while (*str && (*str >= '0' &&  *str <= '9'))
	{
		res = res * 10 + (*str) - '0';
		str++;
	}
	return (res);
	
}
void	print_hex(unsigned int n)
{
	char	hex[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}