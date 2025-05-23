/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:44:02 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/04/24 14:12:06 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct      s_list
{
	struct s_list   *next;
	void            *data;
}                   t_list;


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	temp = *begin_list;
	while (cmp(temp->data, data_ref) == 0)
	{
		*begin_list = temp->next;
		free(temp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	temp = *begin_list;
	ft_list_remove_if(temp->next, data_ref, cmp);
}

