/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:47:11 by weast             #+#    #+#             */
/*   Updated: 2024/09/25 15:18:42 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*swap(t_node **stack, char stack_name)
{
    int	temp;

    if ((*stack) == NULL || (*stack)->next == NULL)
        return (0);
    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
    if (stack_name == 'a')
        return("sa");
    else
        return("sb");
}

char	*rotate(t_node **stack, char stack_name)
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
    if (stack_name == 'a')
        return("ra");
    else
        return("rb");
}

char	*reverse_rotate(t_node **stack, char stack_name)
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
    if (stack_name == 'a')
        return("rra");
    else
        return("rrb");
}

char	*push(t_node **src_stack, t_node **dest_stack, char stack_name)
{
    t_node *first;

    if (*src_stack == NULL)
        return (0);
    first = *src_stack;
    *src_stack = first->next;
    first->next = *dest_stack;
    *dest_stack = first;
    if (stack_name == 'a')
        return("pa");
    else
        return("pb");
}
