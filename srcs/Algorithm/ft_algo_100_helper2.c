/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_helper2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:17:25 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/18 01:02:36 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_somme_algo_100(t_list_a *la, int argc, int token, int len)
{
	int			chiffre;
	double		last;

	if (token == 5)
	{
		chiffre = 2147483647;
		return (chiffre);
	}
	last = token * 0.2;
	chiffre = 0;
	chiffre = ft_somme_100helper(len, argc, la, token);
	chiffre = chiffre * last;
	return (chiffre);
}

int	ft_somme_100helper(int len, int argc, t_list_a *la, int token)
{
	static int	chiffre;

	if (token > 1)
	{
		return (chiffre);
	}
	chiffre = 0;
	while (len > 0 && la)
	{
		chiffre = chiffre + la->num;
		la = la->next;
		len--;
	}
	chiffre = chiffre / argc;
	chiffre = chiffre * 2;
	return (chiffre);
}

void	ft_take_25_algo100(t_struct *data, int compare, int little)
{
	int		lit1;
	int		lit2;

	if (ft_len_lista(data) == 1)
		lit1 = 0;
	else if (compare == 1)
	{
		while (data->la->next->num != little)
			data->la = rra(data);
		ft_printf("ma liste ressemble a ca\n");
		ft_print_listb(data);
	}
	else if (compare == 0)
	{
		while (data->la->next->num != little)
			data->la = ra(data);
		ft_printf("ma liste ressemble a ca\n");
		ft_print_listb(data);
	}
	lit1 = ft_trie_100_b_little(data, little);
	lit2 = ft_trie_100_b_biggest(data, little);
	ft_100_swap_manager(data, lit1, lit2);
}
