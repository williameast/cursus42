/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:53:22 by weast             #+#    #+#             */
/*   Updated: 2024/07/03 13:07:42 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*entry;

	entry = (t_list *)malloc(sizeof(t_list));
	if (!entry)
		return (NULL);
	entry->content = content;
	entry->next = NULL;
	return (entry);
}
