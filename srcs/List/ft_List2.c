/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:00:03 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/24 14:47:34 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

List *ft_Addnumber(List *L, int data, int pos) // L est la premiere cellule
{
	List *prec = L; //pointeur precedant
	List *cur = L; // cur pour actuel
	int i;
	printf("passe");
	Cell *cell = ft_AddCell(data);//data = donner que l'on veut stocker dans la liste
	if (ft_isemptyList(L))
	{
		return (cell);
	}
	if (pos < 0)
	{
		cell->next = L; //pour ajouter au debut
		return cell;// pour faire pointer la nouvelle cellule vers la premiere cellule de base
	}
	i = 0;
	while (i < pos) //tant que i est < a position
	{
		i++;
		printf("prec before (in while): %p\n", prec);
		prec = cur; // le pointeur precedant va valloir la cellule courante
		cur = cur->next; // la cellule courante vaut celle d'apres
	}
	prec->next = cell;// la on dit qu'on met notre nouvelle element 
	cell->next = cur; // et le nouvelle element pointe vers l'ancienne

	return (L);
}

/*
List *ft_Addnumber(List *s, int data, int pos)
{
	List *cur;
	List *prec;
	int i;
	List *cell;
	
	cell = ft_AddCell(data);
	cur = s;
	prec = s;
	if (ft_isemptyList(s))
		return (cell);
	
	if (pos < 0)
	{
		cell->next = s;
		return (cell);
	}
	
	if (pos > ft_len_list(s))
		return (s);
	
	i = 0;
	while (i < pos)
	{
		i++;
		printf("prec before (in while): %p\n", prec);
		prec = cur;
		if (cur->next == NULL)
			break ;
		cur = cur->next;
	}
	if (prec == NULL)
		return (NULL);
	printf("prec before: %p\n", prec);
	prec->next = cell;
	printf("prec after: %p\n", prec);
	cell->next = cur;
	return (s);
}*/

void changeAt(List *s, int data, int pos)
{
	int i;

	i = 0;
	if (ft_isemptyList(s))
		return ;
	if (pos > ft_len_list(s))
		return ;
	while (i < pos)
	{
		i++;
		s = s->next;
	}
	s->data = data;
}

int ft_len_list(List *s)
{
	long len = 0;
	while(s)
	{
		len++;
		s = s->next;
	}
	return (len);
}

int ft_getAt(t_pile *s, int pos)
{
	int i;

	i = 0;
	if (ft_isemptyList(s))
	{
		write(1, "liste vide", 11);
		return (0);
	}
	while (i < pos)
	{
		i++;
		s = s->next;
	}
	return (s->data);
}

void ft_transform_arg(int argc, char **argv, List **pile_a)
{
	(void)argc;
	int i;
	int result;
	int j;

	j = 1;
	i = 1;
	while (argv[i])
	{
		result = ft_atoi(argv[i]);
		printf("atoi: %d\n", result);
		*pile_a = ft_Addnumber(*pile_a, result, 0);
		j++;
		i++;
	}
}
