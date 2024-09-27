/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/27 14:33:25 by William          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"
#include <stdio.h>

void	handle_triplets(t_node **stack)
{
    if (is_ascending(stack))
    {
        ft_putstr_fd("stack a is sorted.", 0);
        return ;
    }
    if (list_len(stack) != 2)
    {
        ft_putstr_fd("error: stack longer than 3", 0);
        return ;
    }
}


void	init_stacks(t_node **a, t_node **b)
{
    if (list_len(a) == 3)
    {
        get_move_cost(a);
        sort_triplets(a);
        return ;
    }
    push(a, b, 'b');
    push(a, b, 'b');
    index_list(a);
    index_list(b);
}

int main(int argc, char *argv[])
{
    t_node	*a;
    t_node	*b;

    a = NULL;
    b = NULL;
    if (argc == 2)
        a = get_int_from_str(argv[1]);
    else
        a = get_int_from_argv(argc, argv);
    if (a == NULL || check_for_dup_in_stack(&a))
    {
        ft_putstr_fd("Error\n", 2);
        free_list(a);
        return (0);
    }
    init_stacks(&a, &b);
    index_list(&a);
    get_move_cost(&a);
    /* print_both(&a, &b); */
    /* push(&a, &b, 'b'); */
    /* push(&a, &b, 'b'); */
    /* printf("max: %i\n", get_max(&a)); */

    print_both(&a, &b);
    free_list(a);
    return 0;
}
