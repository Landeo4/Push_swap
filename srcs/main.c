/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:14:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/25 19:07:55 by tpotilli         ###   ########.fr       */
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
		lb = ft_addAtb(lb, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_both(la, lb);
	printf("\n");
	pb(la, lb);
	ft_print_both(la, lb);
	ft_free_lista(la);
	ft_free_listb(lb);
	return (0);
}