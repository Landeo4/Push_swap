/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:07:26 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/25 19:08:11 by tpotilli         ###   ########.fr       */
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

t_list_b *pb(t_list_a *la, t_list_b *lb)
{
	t_list_a *firsta;
	t_list_b *firstb;
	int tmpb;

	firsta = la;
	firstb = lb;
	tmpb = firstb->data;
	ft_addAta(firsta, tmpb, 1);
	return (firstb);
}
