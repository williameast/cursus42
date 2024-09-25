/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/25 16:47:16 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int main(int argc, char *argv[])
{
    int	i;
    t_node	*stack_a;
    t_node	*stack_b;

    stack_a = NULL;
    stack_b = NULL;
    i = 1;
    if (argc == 2)
        stack_a = get_int_from_str(argv[1]);
    else
        stack_a = get_int_from_argv(argc, argv);
    if (stack_a == NULL || check_for_dup_in_stack(&stack_a))
    {
        ft_putstr_fd("Error\n", 2);
        return (0);
    }
    print_stack(&stack_a);
    return 0;
}
