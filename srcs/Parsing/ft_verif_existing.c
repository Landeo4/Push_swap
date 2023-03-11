/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_existing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:10:24 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/11 15:19:41 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	argv (input)
**
** =====================================================
** =====================================================
**
** It will check if there is at least 1 number as parameter
*/

bool ft_verif_existing(int argc)
{
	if (!(argc > 2))
		return (0);
	return (1);
}