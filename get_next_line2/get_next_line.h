/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:34:42 by weast             #+#    #+#             */
/*   Updated: 2024/08/08 12:04:29 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

#define BUFFER_SIZE 64

typedef struct s_node
{
    	char	buffer[BUFFER_SIZE + 1];
    	struct	s_node	*link;
}	t_node;


#endif // GET_NEXT_LINE_H
