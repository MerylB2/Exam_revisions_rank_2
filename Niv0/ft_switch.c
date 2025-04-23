/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:06:14 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 17:25:53 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_switch(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

// main

#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 6;

    printf("Before swap: a ->%d & b ->%d\n", a, b);
    ft_switch(&a, &b);
    printf("After swap: a ->%d & b ->%d\n", a, b);
    return (0);
}