/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 23:59:59 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/24 00:21:18 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
	return (n > 0 && ((n & (n -1)) == 0) ? 1 : 0);
}

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 20; i++)
        printf("%d : %s\n", i, is_power_of_2(i) ? "YES" : "NO");
    return 0;
}

// int	main(void)
// {
	
// 	printf ("%d\n", is_power_of_2(1024));
// 	return (0);
// }