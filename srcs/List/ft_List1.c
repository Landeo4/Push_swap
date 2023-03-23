/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:29:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/23 13:35:56 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

List *ft_emptyList()
{
	return (NULL);
}

int ft_isemptyList(List *s)
{
    return (s == NULL);
}

List *ft_AddCell(int data)
{
	List *cell = malloc(sizeof(List));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}

List *freeList(List *s)
{
	List *tmp = NULL;
	while (s)
	{
		tmp = s->next;
		free(s);
		s = tmp;
	}
	return (s);
}

void ft_printList(List *s)
{
	while (s)
	{
		printf("%d\n", s->data);
		s = s->next;
	}
	printf("\n");
}
