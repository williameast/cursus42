/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calculator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: William <weast@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:00:03 by William           #+#    #+#             */
/*   Updated: 2024/09/26 23:21:16 by William          ###   ########.fr       */
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
            temp->cost = len - i + 2;
        i++;
        /* if  (len % 2 == 0) */
        /*     temp->cost = i; */
        temp = temp->next;
    }
}
