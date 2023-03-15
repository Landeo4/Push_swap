/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:31:04 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/14 17:08:12 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_parsing_manager(int argc, char **argv)
{
	int i;
	char *buf;

	i = 1;
	write(2, RED, ft_strlen(RED));
	while (argv[i])
	{
		buf = argv[i];	
		if ((ft_verif_existing(argc)) == 0)
		{
			write(2, "put the ciment on the poto la bas\n", 35);
			return (2);
		}
		if ((ft_verif_input(argv)) == 0)
		{
			write(2, "get on the beteuse\n", 20);
			return (0);
		}
		if ((ft_verif_int(buf)) == 0)
		{
			write(2, "hurry up hein\n", 15);
			return (0);
		}
		if ((ft_verif_duplicate(argv)) == 0)
		{
			write(2, "ca fait deja 10 min j'ai allumer la clope\n", 43);
			return (0);
		}
		i++;
	}
	write(2, RESET, ft_strlen(RESET));
	return (1);
}
