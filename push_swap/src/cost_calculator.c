/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calculator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: William <weast@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:00:03 by William           #+#    #+#             */
/*   Updated: 2024/09/27 12:24:44 by William          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	get_move_cost(t_node **head)
{
    t_node	*temp;
    int	len;
    int	i;

    temp = *head;
    len = list_len(&temp);
    i = 1;
    index_list(&temp);

    while (temp != NULL)
    {
        if  (i <= (len + 1) / 2)
            temp->cost = i;
        else
            temp->cost = -(len - i + 2);
        i++;
        temp = temp->next;
    }
}

int	get_max_cost(t_node **head)
{
    t_node	*temp;
    int max;
    int	res;

    temp = *head;
    max = temp->n;
    res = temp->cost;
    while (temp != NULL)
    {
        if (temp->n > max)
        {
            res = temp->cost;
            max = temp->n;
        }
        temp = temp->next;
    }
    return (res);
}

int	get_min_cost(t_node **head)
{
    t_node	*temp;
    int min;
    int	res;

    temp = *head;
    min = temp->n;
    res = temp->cost;
    while (temp != NULL)
    {
        if (temp->n < min)
        {
            res = temp->cost;
            min = temp->n;
        }
        temp = temp->next;
    }
    return (res);
}
