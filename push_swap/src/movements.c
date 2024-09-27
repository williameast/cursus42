/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:47:11 by weast             #+#    #+#             */
/*   Updated: 2024/09/27 15:20:07 by William          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*swap(t_node **stack, char stack_name) // 0
{
    int	temp;

    if ((*stack) == NULL || (*stack)->next == NULL)
        return (0);
    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
    (*stack)->cost = (*stack)->next->cost;
    (*stack)->next->cost = temp;
    if (stack_name == 'a')
        return("sa");
    else
        return("sb");
}

char	*rotate(t_node **stack, char stack_name) // 1
{
    t_node *first;
    t_node *second;
    t_node *last;

    if (*stack == NULL || (*stack)->next == NULL)
        return (0);
    first = *stack;
    second = first->next;
    last = first;
    while (last->next != NULL)
        last = last->next;
    last->next = first;
    first->next = NULL;
    *stack = second;
    get_move_cost(stack);
    if (stack_name == 'a')
        return("ra");
    else
        return("rb");
}

char	*reverse_rotate(t_node **stack, char stack_name) //-1
{
    t_node *second_last;
    t_node *last;

    if (*stack == NULL || (*stack)->next == NULL)
        return (0);
    second_last = NULL;
    last = *stack;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    last->next = *stack;
    second_last->next = NULL;
    *stack = last;
    get_move_cost(stack);
    if (stack_name == 'a')
        return("rra");
    else
        return("rrb");
}

char	*push(t_node **src_stack, t_node **dest_stack, char stack_name) //2
{
    t_node *first;

    if (*src_stack == NULL)
        return (0);
    first = *src_stack;
    *src_stack = first->next;
    first->next = *dest_stack;
    *dest_stack = first;
    get_move_cost(src_stack);
    get_move_cost(dest_stack);
    if (stack_name == 'a')
        return("pa");
    else
        return("pb");
}
