/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:38:00 by weast             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/09/26 17:49:04 by William          ###   ########.fr       */
=======
/*   Updated: 2024/09/23 17:53:02 by weast            ###   ########.fr       */
>>>>>>> b8a5696 (push swap!)
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

# include "../libft/libft.h"


# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node
{
    int	n;
    int	index;
    int	cost;
    struct s_node	*next;
}	t_node;

/* declarations */
/* Declarations from sanitize.c */
int	check_for_dup_in_stack(t_node **head);
t_node	*get_int_from_str(char *str);
t_node	*get_int_from_argv(int argc, char **argv);

/* Declarations from double_moves.c */
char	*swap_both(t_node **a, t_node **b);
char	*rotate_both(t_node **a, t_node **b);
char	*reverse_rotate_both(t_node **a, t_node **b);
char	*push_both(t_node **a, t_node **b);

/* Declarations from utils.c */
int	is_ascending(t_node **head);
int	is_decending(t_node **head);
int	get_max(t_node **head);
int	get_min(t_node **head);

/* Declarations from main.c */
void	handle_triplets(t_node **stack);
void	init_stacks(t_node **a, t_node **b);
int main(int argc, char *argv[]);

/* Declarations from list_mgmt.c */
t_node	*generate_node(int n);
void	append_node(t_node **head, int n);
int	list_len(t_node **head);
void	index_list(t_node **head);
void	free_list(t_node *head);

/* Declarations from printing.c */
void	print_stack(t_node **head);
void	print_stack_v(t_node **head);
void	print_both(t_node **a, t_node **b);

/* Declarations from cost_calculator.c */
void	get_move_cost(t_node **head);
int	get_max_cost(t_node **head);
int	get_min_cost(t_node **head);

/* Declarations from algo.c */
void	sort_triplets(t_node **stack);

/* Declarations from movements.c */
char	*swap(t_node **stack, char stack_name);
char	*rotate(t_node **stack, char stack_name);
char	*reverse_rotate(t_node **stack, char stack_name);
char	*push(t_node **src_stack, t_node **dest_stack, char stack_name);

/* declarations end */


#endif // PUSH_SWAP_H_

