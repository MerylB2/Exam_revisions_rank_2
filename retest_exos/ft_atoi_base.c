/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:04:11 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/04/24 13:37:00 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, unsigned int str_base)
{
	int temp, res = 0, sign = 1;

	while (is_blank(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		temp = value_of(*str);
		if (temp == -1 || temp >= (int)str_base)
			break;
		res = res * (int)str_base + temp;
		str++;
	}
	return res * sign;
}


/* test */
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("     16", 16)); // -26
	printf("%d\n", ft_atoi_base("1A", 16));     // 26
	printf("%d\n", ft_atoi_base("-101", 2));    // -5
	printf("%d\n", ft_atoi_base("123", 10));    // 123
	printf("%d\n", ft_atoi_base("7F", 16));     // 127
	printf("%d\n", ft_atoi_base("1101", 2));    // 13
	printf("%d\n", ft_atoi_base("-2F", 16));    // -47
	return 0;
}