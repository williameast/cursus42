/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:02:54 by weast             #+#    #+#             */
/*   Updated: 2024/04/23 17:41:36 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*temp_source;
	char	*temp_dest;
	size_t	i;

	if (!dest && !source)
		return (0);
	i = 0;
	temp_source = (char *) source;
	temp_dest = (char *) dest;
	if (temp_source > temp_dest)
	{
		while (n-- > 0)
			temp_dest[n + 1] = temp_source[n + 1];
	}
	else
	{
		while (i++ < n)
			temp_dest[i - 1] = temp_source[i - 1];
	}
	return (dest);
}
/* #include <string.h> */
/* int main() { */
/*     char dest[15] = "Hello, World!"; */
/*     const char src[] = "pog cat leg to many"; */
/*     size_t n = strlen(src); */

/*     printf("Original destination string: %s\n", dest); */

/*     ft_memmove(dest + 7, src, n); */

/*     printf("Destination string after memmove: %s\n", dest); */

/*     return 0; */
/* } */
