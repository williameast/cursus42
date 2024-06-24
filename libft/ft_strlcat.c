/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:47:37 by weast             #+#    #+#             */
/*   Updated: 2024/06/24 11:51:49 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	source_len;

	dest_len = ft_strlen(dest);
	source_len = ft_strlen(source);
	i = 0;
	j = source_len + 1;
	if (dest_len < (n - 1) && n > 0)
	{
		while (source[i] && dest_len + i < n - 1)
		{
			dest[j] = source[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (dest_len >= n)
		dest_len = n;
	return (dest_len + source_len);
}
/* #include <stdio.h> */
/* int main() { */
/*     char dest[40] = "Hello, "; */
/* 		char *src = "world!"; */
/* 		size_t dest_size = sizeof(dest); */
/* 		size_t result; */

/* 		result = ft_strlcat(dest, src, dest_size); */

/*     printf("Concatenated string: %s\n", dest); */

/*     return 0; */
/* } */
