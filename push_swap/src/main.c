/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/26 23:34:10 by William          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	handle_triplets(t_node **stack)
{


}


void	init_stacks(t_node **a, t_node **b)
{
    if (list_len(&a) == 2)
        handle_triplets(a);
    index_list(&a);
    index_list(&b);

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
        return (0);
    }
    init_stacks(&a, &b);
    index_list(&a);
    get_move_cost(&a);
    print_both(&a, &b);
    push(&a, &b, 'b');
    push(&a, &b, 'b');
    /* printf("max: %i\n", get_max(&a)); */

    print_both(&a, &b);

    return 0;
}
