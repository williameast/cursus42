/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:38:00 by weast             #+#    #+#             */
/*   Updated: 2024/09/25 13:53:18 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

# include "../libft/libft.h"


# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_node
{
    int	n;
    /* int	index; */
    /* int	cost; */
    struct s_node	*next;
}	t_node;

/* declarations */
/* Declarations from main.c */
int	check_for_dup_in_stack(t_node **head);
int main(int argc, char *argv[]);

/* Declarations from movements.c */
char	*swap(t_node **stack, char stack_name);
char	*rotate(t_node **stack, char stack_name);
char	*reverse_rotate(t_node **stack, char stack_name);
char	*push(t_node **src_stack, t_node **dest_stack, char stack_name);

/* Declarations from helpers.c */
void	print_stack(t_node **head);

/* Declarations from list_mgmt.c */
t_node	*generate_node(int n);
void append_node(t_node **head, int n);

/* Declarations from double_moves.c */
char	*swap_both(t_node **a, t_node **b);
char	*rotate_both(t_node **a, t_node **b);
char	*reverse_rotate_both(t_node **a, t_node **b);
char	*push_both(t_node **a, t_node **b);

/* declarations end */


#endif // PUSH_SWAP_H_

