/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:47:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/25 16:37:37 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

// =======================================================================
//								Includes
// =======================================================================

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

// =======================================================================
//								Colors
// =======================================================================

# define BLACK "\001\033[1;30m\002"
# define RED "\001\033[1;31m\002"
# define GREEN "\001\033[1;32m\002"
# define YELLOW "\001\033[1;33m\002"
# define BLUE "\001\033[1;34m\002"
# define PURPLE "\001\033[1;35m\002"
# define CYAN "\001\033[1;36m\002"
# define WHITE "\001\033[1;37m\002"
# define RESET "\001\033[0m\002"

// =======================================================================
//								list
// =======================================================================

typedef struct s_list_a
{
	int data;
	struct s_list_a *next;
}	t_list_a;

typedef struct s_list_b
{
	int data;
	struct s_list_b *next;
}	t_list_b;

// =======================================================================
//								Function List
// =======================================================================

t_list_a *ft_createCell(int data);
t_list_a *ft_first_la(t_list_a *la);
t_list_a *ft_addAt(t_list_a *la, int data, int pos);
int ft_print_list(t_list_a *la);
t_list_a *ft_free_list(t_list_a *la);
int ft_len_list(t_list_a *la);
int ft_getAt(t_list_a *la, int pos);

// =======================================================================
//								Libft
// =======================================================================

int		ft_isdigit(int c);
int		ft_strlen(char *s);
int		ft_atoi(char *nptr);
long	ft_atol(char *nptr);
void	ft_putstr_fd(char *s, int fd);

// =======================================================================
//								Parsing 
// =======================================================================

bool ft_verif_input(char **argv);
bool ft_verif_existing(int argc);
bool ft_verif_duplicate(char **argv);
bool ft_verif_int(char *argv);
int ft_parsing_manager(int argc, char **argv);

// =======================================================================
//								actions
// =======================================================================

t_list_a *sa(t_list_a *la);
t_list_b *sb(t_list_b *lb);

void push_swap(t_list_a *);
void ft_error();

#endif