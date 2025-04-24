/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:12:13 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/04/24 15:25:45 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip_space(char *str, int i)
{
	while (str[i] == 9 || str[i] == 32)
		i++;
	return (i);
}

int	word_len(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != 9 && str[i] != 32)
		i++;
	return (i);
}

int	print_word(char *str, int i, int *is_fisrt)
{
	int len;

	i = skip_space(str, i);
	len = word_len(str + i);
	if (*is_fisrt == 0)
		write(1, " ", 1);
	write(1, str + i, len);
	*is_fisrt = 0;
	return (len + i);
}

int	ft_epur_str(char *str)
{
	int	i = 0;
	int	is_first = 1;

	i = skip_space(str, i);
	while (str[i] != '\0')
	{
		i = print_word(str, i, &is_first);
		i = skip_space(str, i);
	}
	return (is_first);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		char	*str = av[1];
		int i = 0;
		int	is_irst;
	
		i = skip_space(str, i);
		i = i + word_len(str + i);
		is_irst = ft_epur_str(str + i);
		print_word(str, 0, &is_irst);
	}
	write(1, "\n", 1);
	return (0);
}