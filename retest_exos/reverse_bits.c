/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:04:58 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/04/24 12:21:52 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	return ((((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0));
}

#include <unistd.h>

int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)2);

	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		write(1, &bit, 1);
	}
	write(1, "\n", 1);
}