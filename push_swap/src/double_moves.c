/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:14:39 by weast             #+#    #+#             */
/*   Updated: 2024/09/25 15:21:27 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*swap_both(t_node **a, t_node **b)
{
    swap(a, 'a');
    swap(b, 'b');
    return ("ss");
}

char	*rotate_both(t_node **a, t_node **b)
{
    rotate(a, 'a');
    rotate(b, 'b');
    return("rr");
}

char	*reverse_rotate_both(t_node **a, t_node **b)
{
    reverse_rotate(a, 'a');
    reverse_rotate(b, 'b');
    return("rrr");
}

char	*push_both(t_node **a, t_node **b)
{
    int	temp;
    if (*a == NULL && *b == NULL)
        return (0);
    temp = (*a)->n;
    (*a)->n = (*b)->n;
    (*b)->n = temp;
    return ("pp");
}
