/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:05:00 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/15 14:24:22 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_pile *s, t_pile *list_a, t_pile *list_b)
{
	ft_take_data(list_a);
}

void ft_take_data(t_pile *list_a)
{
	int data;
	data = ft_getAt(list_a, 0);
	ft_test(list_a, data);
}

void ft_test(t_pile *list_a, int data)
{
	ft_addnumber(list_a, data, 0);
}
// faire une fonction pour recuperer ce qu'il y a dans b
// puis le mettre dans a, pour ca il faut
// une fonction pour cree des cases, une autre pour verifier la position