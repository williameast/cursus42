/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/23 18:20:21 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"
#include <stdio.h>
#include "movements.c"

t_node	*generate_node(int n)
{
    t_node	*new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    return (new_node);
}

void append_node(t_node **head, int n)
{
    t_node	*current_node;
    t_node	*new_node;

    new_node = generate_node(n);

    if (*head == NULL)
        *head = new_node;
    else
    {
        current_node = *head;
        while(current_node->next != NULL)
            current_node = current_node->next;
        current_node->next = new_node;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*           print the full stack, in the order it is currently in.           */
/*                                                                            */
/* ************************************************************************** */

void	print_stack(t_node **head)
{
    t_node	*temp;

    temp = *head;
    while (temp != NULL)
    {
        ft_putnbr_fd(temp->n, 0);
        ft_putchar_fd(' ', 0);
        temp = temp->next;
    }
}

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

int main(int argc, char *argv[])
{
    int	i;
    int	nb;
    i = 1;
    t_node	*stack_a;

    stack_a = NULL;
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
    swap(stack_a, 'a');
    ft_putchar_fd('\n', 0);
    print_stack(&stack_a);
    return 0;
}
