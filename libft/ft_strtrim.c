/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:35:32 by weast             #+#    #+#             */
/*   Updated: 2024/06/24 14:00:57 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *str, const char *pattern)
{
	int	start;
	int	end;
	int	i;
	char	*result;

	if (!str || !pattern)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(str) - 1;
	while(ft_strchr(pattern, str[start]) && start <= end)
		start++;
	while(ft_strchr(pattern, str[end]) && end >= 0)
		end--;
	result = (char *)malloc(sizeof(char) * end-start);
	if (!result)
		return (NULL);
	while (start <= end)
	{
		result[i] = str[start];
		i++;
		start++;
	}
	return (result);
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* printf("%s\n", ft_strtrim("...this is a test...", ".")); */
/*     return 0; */
/* } */
