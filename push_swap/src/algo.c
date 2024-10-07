/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: William <weast@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:28:01 by William           #+#    #+#             */
/*   Updated: 2024/10/02 19:38:14 by William          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* ************************************************************************** */
/*                                                                            */
/*sa 0 |sb 1 |ss 2 |pa 3 |pb 4 |pp 5 |ra 6 |rb 7 |rr 8 |rra 9 |rrb 10 |rrr 11 */
/*                                                                            */
/* ************************************************************************** */
void	sort_triplets(int min_cost, int max_cost, t_moves *seq)
{
	if (max_cost == 1) // 3 2 1 or 3 1 2
	{
		if (min_cost == 2) // 3 1 2
		add_move(seq, 6); // ra
		else // 3 2 1
		{
			add_move(seq, 0);
			add_move(seq, 9);
		}
	}
	else if (max_cost != 1 && min_cost != 1) // 2 1 3 or 2 3 1
	{
		if (max_cost == -2) // 2 1 3
			add_move(seq, 0);
		else // 2 3 1
			add_move(seq, 9);
	}
	else // 1 3 2
	{
			add_move(seq, 6);
			add_move(seq, 0);
	}
}


/* ************************************************************************** */
/*                                                                            */
/*sa 0 |sb 1 |ss 2 |pa 3 |pb 4 |pp 5 |ra 6 |rb 7 |rr 8 |rra 9 |rrb 10 |rrr 11 */
/*                                                                            */
/* ************************************************************************** */

void	get_moves_to_extract_max(t_node **a, t_moves *seq)
{
	int max_cost;

	max_cost = get_max_cost(a);
	printf("attempting to move %i, current cost: %i\n", get_max(a), max_cost);
	if (max_cost > 1)
		while (max_cost != 2)
		{
			add_move(seq, 6);
			max_cost--;
		}
	else
		while (max_cost != -1)
		{
			if (max_cost == -1)
				max_cost = -max_cost;
			add_move(seq, 9);
			max_cost++;
		}
	add_move(seq, 4);
}

void	max_sort(t_node **a, t_moves *seq)
{
	int	len_a;

	len_a = list_len(a);
	while (len_a > 1)
	{
		get_move_cost(a);
		get_moves_to_extract_max(a, seq);
		len_a--;
	}
}

int	*segment(t_node **a, int segments)
{
	int	segment_size;
	int	remainder;
	index_list(a);
	segment_size = list_len(a) / segments;
	remainder =




}

t_moves	*block_sort(t_node **a)
{


}


/* t_moves	*rotate_sort(t_node **a) */
/* { */
/* 	t_moves *seq; */
/* 	t_node	*b; */
/* 	int	len; */
/* 	int	i; */

/* 	b = NULL; */
/* 	i = 0; */
/* 	seq = init_movseq(50); */
/* 	if (is_ascending(a)) */
/* 		return (NULL); */
/* 	len = list_len(a); */
/* 	if (len == 2) */
/* 	{ */
/* 		get_move_cost(a); */
/* 		sort_triplets(get_max_cost(a), get_min_cost(a), seq); */
/* 		return (seq); */
/* 	} */
/* 	else */
/* 	{ */
/* 		while (i++ < 3) */
/* 		{ */
/* 			apply_single_move(a, &b, 4); */
/* 			add_move(seq, 4); */
/* 		} */


/* 	} */




/* } */
