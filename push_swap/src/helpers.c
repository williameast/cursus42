/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:32:12 by weast             #+#    #+#             */
/*   Updated: 2024/09/26 12:39:35 by William          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*           print the full stack, in the order it is currently in.           */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

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
    ft_putchar_fd('\n', 0);
}

void	print_stack_v(t_node **head)
{
    t_node	*temp;

    temp = *head;
    while (temp != NULL)
    {
        printf("ID:%i VAL: %i\n", temp->index, temp->n);
        temp = temp->next;
    }
    ft_putchar_fd('\n', 0);
}

void	print_both(t_node **a, t_node **b)
{
    t_node *temp_a = *a;
    t_node *temp_b = *b;

    printf("%-15s %-15s\n", "stack a", "stack b");
    printf("%-10s %-5s | %-10s %-5s\n", "id", "value", "id", "value");

    while (temp_a != NULL || temp_b != NULL)
    {
        if (temp_a != NULL && temp_b != NULL)
        {
            printf("%-10d %-5d | %-10d %-5d\n", temp_a->index, temp_a->n, temp_b->index, temp_b->n);
            temp_a = temp_a->next;
            temp_b = temp_b->next;
        }
        else if (temp_a != NULL)
        {
            printf("%-10d %-5d | %-10s %-5s\n", temp_a->index, temp_a->n, "", "");
            temp_a = temp_a->next;
        }
        else if (temp_b != NULL)
        {
            printf("%-10s %-5s | %-10d %-5d\n", "", "", temp_b->index, temp_b->n);
            temp_b = temp_b->next;
        }
    }
}
