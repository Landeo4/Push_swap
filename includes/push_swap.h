/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:47:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/25 18:13:44 by tpotilli         ###   ########.fr       */
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
//								Function List_A
// =======================================================================

t_list_a *ft_createCella(int data);
t_list_a *ft_first_la(t_list_a *la);
t_list_a *ft_addAta(t_list_a *la, int data, int pos);
int ft_print_lista(t_list_a *la);
t_list_a *ft_free_lista(t_list_a *la);
int ft_len_lista(t_list_a *la);
int ft_getAta(t_list_a *la, int pos);
int ft_print_both(t_list_a *la, t_list_b *lb);

// =======================================================================
//								Function List_B
// =======================================================================

t_list_b *ft_createCellb(int data);
t_list_b *ft_first_lb(t_list_b *lb);
t_list_b *ft_addAtb(t_list_b *lb, int data, int pos);
int ft_print_listb(t_list_b *lb);
t_list_b *ft_free_listb(t_list_b *lb);
int ft_len_listb(t_list_b *lb);
int ft_getAtb(t_list_b *lb, int pos);

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