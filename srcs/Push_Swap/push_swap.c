/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:10:16 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/11 14:14:13 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(List *L)
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