/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:07:35 by weast             #+#    #+#             */
/*   Updated: 2024/04/29 15:39:41 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
    {
        char	*sub;
        size_t	i;

        sub = (char *)malloc((len + 1) * sizeof(char));
        if (!sub)
            return (NULL);
        i = 0;
        while(i <= len && s[start + i] != '\0')
			{
				sub[i] = s[start + i];
				i++;
			}
		sub[i] = '\0';
		return(sub);
	}

#include <stdio.h>
int main(void) {
   char *str = "this is a test";
   printf("%s\n", ft_substr(str, 0, 5));
    return 0;
}
