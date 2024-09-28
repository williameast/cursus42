/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/28 14:27:12 by William          ###   ########.fr       */
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

void	init_stacks(t_node **a, t_node **b, t_moves *seq)
{
    if (is_ascending(a))
        return ;
    get_move_cost(a);
    max_sort(a, seq);
    /* print_movseq(seq); */
    apply_movseq(a, b, seq);
    return ;
}

t_moves	*simulate_moves(t_node **sim_a)
{
    t_node	*sim_b;
    t_moves	*sim_seq;
    int	len;
    int	max_cost;

    sim_b = NULL;
    sim_seq = init_movseq(50);
    len = list_len(sim_a);
    while (len > 0)
	{
        get_move_cost(sim_a);
        max_cost = get_max_cost(sim_a);
        while (max_cost > 1)
        {
            apply_single_move(sim_a, &sim_b, 6);
            add_move(sim_seq, 6);
            get_move_cost(sim_a);
            max_cost = get_max_cost(sim_a);
        }
        while (max_cost <= -1)
        {
            apply_single_move(sim_a, &sim_b, 9);
            add_move(sim_seq, 9);
            get_move_cost(sim_a);
            max_cost = get_max_cost(sim_a);
        }
        apply_single_move(sim_a, &sim_b, 4);
        add_move(sim_seq, 4);
        len--;
    }
    print_both(sim_a, &sim_b);
    return (sim_seq);
}

int	main(int argc, char *argv[])
{
    t_node	*a;
    t_node	*b;
    t_moves *seq;
    t_node	*sim_a;

    a = NULL;
    b = NULL;
    sim_a = NULL;
    if (argc == 2)
    {
        a = get_int_from_str(argv[1]);
        sim_a = get_int_from_str(argv[1]);
    }
    else
    {
        a = get_int_from_argv(argc, argv);
        sim_a = get_int_from_argv(argc, argv);
    }
    if (a == NULL || check_for_dup_in_stack(&a))
    {
        ft_putstr_fd("Error\n", 2);
        free_list(a);
        return (0);
    }
    seq = init_movseq(50);
    init_stacks(&a, &b, seq);
    index_list(&a);
    get_move_cost(&a);
    simulate_moves(&sim_a);
    /* print_both(&a, &b); */
    /* push(&a, &b, 'b'); */
    /* push(&a, &b, 'b'); */
    /* printf("max: %i\n", get_max(&a)); */

    /* print_both(&a, &b); */
    free_list(a);
    return 0;
}
