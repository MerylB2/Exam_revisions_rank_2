/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:42:23 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/21 23:54:14 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct  s_point
{
  int           x;
  int           y;
}               t_point;

void	fill(char **tab, t_point size, int x, int y, char target)
{
	if (x < 0 || size.x <= x || y < 0 || size.y <= y)
		return ;
	if (tab[y][x] != target || tab[y][x] == 'F')
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, target); // droite
	fill(tab, size, x - 1, y, target); // gauche 
	fill(tab, size, x, y + 1, target); // bas
	fill(tab, size, x, y - 1, target); // haut
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char	target = tab[begin.y][begin.x];
	if (target != 'F')
		fill(tab, size, begin.x, begin.y, target);
}

/* explication */