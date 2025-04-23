/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:55:53 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 23:56:54 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int m;

    if (!len)
        return (0);
    m = tab[--len];
    while (len--)
    {
        if (tab[len] > m)
            m = tab[len];
    }
    return (m);
}

#include <stdio.h>

int	main(void)
{
	int	nu[]= {-10, 7, -3, -2, 10};
	printf ("%d\n", max(nu, 3));
	return (0);
}