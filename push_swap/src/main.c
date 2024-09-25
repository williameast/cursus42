/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/25 15:34:33 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	check_for_dup_in_stack(t_node **head)
{
    t_node	*needle;
    t_node	*haystack;

    needle = *head;
    while (needle != NULL)
    {
        haystack = needle->next;
        while (haystack !=NULL)
        {
            if (needle->n == haystack->n)
                return (1);
            haystack = haystack->next;
        }
        needle = needle->next;
        }
    return (0);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    int	i;
    int	nb;
    i = 1;
    t_node	*stack_a;
    t_node	*stack_b;

    stack_a = NULL;
    stack_b = NULL;
    while (i < argc)
    {
        nb = ft_atoi(argv[i]);
        if ((nb == 0 && argv[i][0] != '0'))
            return 0;
        append_node(&stack_a, nb);
        i++;
    }
    if (check_for_dup_in_stack(&stack_a))
        return (0);
    print_stack(&stack_a);
    push(&stack_a, &stack_b, 'a');
    push(&stack_a, &stack_b, 'a');
    push(&stack_a, &stack_b, 'a');
    push(&stack_a, &stack_b, 'a');
    reverse_rotate_both(&stack_a, &stack_b);
    print_stack(&stack_a);
    print_stack(&stack_b);
    return 0;
}
