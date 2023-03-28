/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:14:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/27 20:05:49 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
int main(int argc, char **argv)
{
	ft_parsing_manager(argc, argv);
	return (0);
}
*/

/*
sa sb ss
int main(int argc, char **argv)
{
	(void)argc;
	int i;
	t_list_b *lb;
	t_list_a *la;

	la = NULL;
	la = ft_first_la(la);
	lb = NULL;
	lb = ft_first_lb(lb);
	i = 1;
	while (argv[i])
	{
		la = ft_addAta(la, ft_atoi(argv[i]), 1);
		lb = ft_addAtb(lb, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_both(la, lb);
	printf("\n");
	sa(la);
	sb(lb);
	ft_print_both(la, lb);
	ft_free_lista(la);
	ft_free_listb(lb);
	return (0);
}
*/

/*
pb pa
int main(int argc, char **argv)
{
	(void)argc;
	int i;
	t_list_b *lb;
	t_list_a *la;

	la = NULL;
	lb = NULL;
	la = ft_first_la(la);
	lb = ft_first_lb(lb);
	i = 1;
	while (argv[i])
	{
		la = ft_addAta(la, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_lista(la);
	sa(la);
	pb(la, lb);
	pb(la, lb);
	pb(la, lb);
	printf("\napres le passage de pb :\n");
	ft_print_lista(la);
	ft_print_listb(lb);
	pa(la, lb);
	pa(la, lb);
	pa(la, lb);
	ft_print_lista(la);
	ft_print_listb(lb);
	ft_free_both(la, lb);
	return (0);
}
*/

/*int main(int argc, char **argv)
{
	(void)argc;
	int i;
	//t_list_b *lb;
	t_list_a *la;

	la = NULL;
	//lb = NULL;
	la = ft_first_la(la);
	//lb = ft_first_lb(lb);
	i = 1;
	while (argv[i])
	{
		la = ft_addAta(la, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_lista(la);
	ra(la);
	printf("apres ra\n");
	ft_print_lista(la);
	return (0);
}*/

int main(int argc, char *argv[])
{
	(void)argc;
	t_list_a *la = NULL;
	t_list_b *lb = NULL;
	la = ft_first_la(la);
	lb = ft_first_lb(lb);

	int i = 1;
	while (argv[i])
	{
		la = ft_addAta(la, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_lista(la);
	ft_print_listb(lb);
	pb(la, lb);
	lb = rb(lb);
	la = ra(la);
	ft_print_lista(la);
	ft_print_listb(lb);
	return 0;
}
