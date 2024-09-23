/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:57:10 by weast             #+#    #+#             */
/*   Updated: 2024/09/23 14:56:24 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"
#include <stdio.h>

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

int	is_number(char *input)
{

}

int main(int argc, char *argv[])
{
    int	i;
    i = 1;
    t_node	*stack_a;
    stack_a = NULL;
    while (i < argc)
    {

        if (!ft_isdigit(ft_atoi(argv[i]) )

        append_node(&stack_a, ft_atoi(argv[i]));
        i++;
    }
    print_stack(&stack_a);
    return 0;
}
