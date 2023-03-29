/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:54:38 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/29 13:56:18 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list b
** =====================================================
** =====================================================
**
** every element of a will go down
** the first become the last
*/

t_list_b *rrb(t_list_b *lb)
{
	t_list_b *tmp;
	int i;
	int recup;

	tmp = lb->next;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	recup = tmp->data;
	tmp = lb;
	tmp = ft_freeAtb(tmp, i);
	tmp = ft_addAtb(tmp, recup, 1);
	return (tmp);
}
