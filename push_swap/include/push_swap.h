/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:38:00 by weast             #+#    #+#             */
/*   Updated: 2024/09/23 13:55:54 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
    int	n;
    /* int	index; */
    /* struct s_node	*prev; */
    struct s_node	*next;
}	t_node;

#endif // PUSH_SWAP_H_
