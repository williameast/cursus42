/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:35:00 by weast             #+#    #+#             */
/*   Updated: 2024/04/25 11:56:27 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*pattern == '\0' || str == NULL)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (pattern[j] == str[i + j] && i + j < len)
		{
			if (pattern[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
