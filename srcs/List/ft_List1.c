/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:29:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/11 13:58:43 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_emptyList()
{
	return (NULL);
}

List *ft_isEmptyList(List *L)
{
	return (L = NULL);
}

List *ft_addCell(List *L)
{
	Cell *cell = malloc(sizeof(cell));
	if (!cell)
		return (NULL);
	cell = L->data;
	cell = L->next;
}

List *freeList(List *L)
{
	List *tmp = NULL;
	while (L)
	{
		tmp = L->next;
		free(L);
		L = tmp;
	}
	return (L);
}

void ft_printList(List *L)
{
	while (L)
	{
		printf("%d\n", L->data);
		L = L->next;
	}
	printf("\n");
}