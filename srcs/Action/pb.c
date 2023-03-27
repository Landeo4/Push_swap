/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:07:26 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/27 17:09:12 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list a
** =====================================================
** =====================================================
**
** take the first element on the top of a and put it in top b
** prend le premier element au sommet de a et le met sur b.
*/

t_list_b *pb(t_list_a *la, t_list_b *lb)
{
	t_list_a *firsta;
	t_list_b *firstb;
	int tmp;

	firsta = la;
	firstb = lb;
	tmp = firsta->next->data;
	ft_freeAta(la, 1);
	ft_addAtb(firstb, tmp, 1);
	return (firstb);
}
