/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:10:16 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/29 13:26:05 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_list_a *la)
{
	int b;
	b = 0;
	
	if (L < '48' || L > '57')
	{
		return (ft_error);
	}
	if (L < -2147483648 || L > 2147483647)
		return (ft_error);
}

void ft_error()
{
	printf("error\n");
}