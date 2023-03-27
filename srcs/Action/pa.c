/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:34:29 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/27 17:08:55 by tpotilli         ###   ########.fr       */
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
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
*/

t_list_b *pa(t_list_a *la, t_list_b *lb)
{
	t_list_a *firsta;
	t_list_b *firstb;
	int tmp;

	firsta = la;
	firstb = lb;
	tmp = firstb->next->data;
	ft_freeAtb(lb, 1);
	ft_addAta(firsta, tmp, 1);
	return (firstb);
}
