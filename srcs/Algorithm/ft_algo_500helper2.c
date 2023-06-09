/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_500helper2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:28:09 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/20 22:01:31 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_somme_algo_500(t_list_a *la, int argc, int token, int len)
{
	int			chiffre;
	double		last;

	if (token == 12)
	{
		chiffre = 2147483647;
		return (chiffre);
	}
	last = token * 0.09;
	chiffre = 0;
	chiffre = ft_somme_500helper(len, argc, la, token);
	chiffre = chiffre * last;
	return (chiffre);
}

int	ft_somme_500helper(int len, int argc, t_list_a *la, int token)
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

void	ft_take_25_algo500(t_struct *data, int compare, int little)
{
	int		lit1;
	int		lit2;

	if (ft_len_lista(data) == 1)
		lit1 = 0;
	else if (compare == 1)
	{
		while (data->la->next->num != little)
			data->la = rra(data);
		ft_print_listb(data);
	}
	else if (compare == 0)
	{
		while (data->la->next->num != little)
			data->la = ra(data);
		ft_print_listb(data);
	}
	lit1 = ft_trie_500_b_little(data, little);
	lit2 = ft_trie_500_b_biggest(data, little);
	ft_500_swap_manager(data, lit1, lit2);
}

int	ft_verif_lb500(t_struct *data)
{
	t_list_b	*lb;
	int			nb;

	lb = data->lb;
	if (data->lb->next->num < data->lb->next->next->num)
	{
		lb = sb(lb, data);
	}
	nb = data->lb->next->num;
	lb = data->lb->next;
	while (lb)
	{
		if (nb < lb->num)
			return (0);
		lb = lb->next;
	}
	return (-1);
}

int	ft_found_big_lb_500(t_struct *data)
{
	int			nb;
	t_list_b	*lb;

	lb = data->lb->next->next;
	nb = data->lb->next->num;
	while (lb)
	{
		if (nb < lb->num)
			nb = lb->num;
		lb = lb->next;
	}
	return (nb);
}
