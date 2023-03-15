/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:29:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/15 14:17:22 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_emptyList()
{
	return (NULL);
}

List *ft_isEmptyList(List *s)
{
	return (s = NULL);
}

List *ft_addCell(List *s)
{
	List *cell = malloc(sizeof(cell));
	if (!cell)
		return (NULL);
	cell = s->data;
	cell = s->next;
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