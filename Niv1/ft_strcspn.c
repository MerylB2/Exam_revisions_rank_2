/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:47:30 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 22:19:49 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j++])
				return (i);
		}
		j = 0;
		i++;
	}
	return (i);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
    return(0);
}
