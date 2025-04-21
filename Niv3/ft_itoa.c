/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:34:33 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 20:00:22 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	long	n;
	int		len;

	n = nbr;
	len = get_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		len--;
		res[len] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}


// // This function converts an integer to a string representation.
// // It handles negative numbers and zero correctly.
// // The function first calculates the length of the number in digits.
// // It allocates memory for the string, including space for the null terminator.
// // It then fills the string with the digits of the number, starting from the end.
// // The function returns a pointer to the newly allocated string.
// // The caller is responsible for freeing the allocated memory.
// // The function returns NULL if memory allocation fails.
// // The function uses a static helper function to calculate the length of the number.

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int num = atoi(av[1]);
// 		char *str = ft_itoa(num);
// 		if (str)
// 		{
// 			write(1, str, ft_len(num));
// 			free(str);
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

/**** Another Way to write ft_itoa *****/

// char	*ft_itoa(int n)
// {
// 	char	*str;
// 	int		len;
// 	int		sign;
// 	int		i;
	
// 	sign = (n < 0) ? -1 : 1;
// 	len = (n <= 0) ? 1 : 0;
// 	i = n;
// 	while (i)
// 	{
// 		i /= 10;
// 		len++;
// 	}
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	str[len] = '\0';
// 	if (n == 0)
// 		str[0] = '0';
// 	if (sign == -1)
// 	str[0] = '-';
// while (n)
// {
// 		str[--len] = sign * (n % 10) + '0';
// 		n /= 10;
// 	}
// 	return (str);
// }

// #include <unistd.h>

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int num = atoi(av[1]);
// 		char *str = ft_itoa(num);
// 		if (str)
// 		{
// 			write(1, str, sizeof(num));
// 			free(str);
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
