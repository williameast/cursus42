/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:42:19 by weast             #+#    #+#             */
/*   Updated: 2024/06/24 15:58:19 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int	count_words(const char *str, char delimiter)
{
	size_t	i;
	int	wordcount;
	int	flag;

	i = 0;
	wordcount = 0;
	flag = 0;
	while (str[i] != '\0')
		{
			if (str[i] == delimiter)
				flag = 0;
			else if (flag == 0)
				{
					wordcount++;
					flag = 1;
				}
			i++;
		}
	return (wordcount);
}

void	str_separate(char *strn)


int main(void) {
    printf("%d\n", count_words("this is a test string", ' '));
    printf("%d\n", count_words("this is", ' '));
    printf("%d\n", count_words(" this", ' '));
    printf("%d\n", count_words(" this ", ' '));
    printf("%d\n", count_words(" this       ", ' '));
    printf("%d\n", count_words("        ", ' '));
    printf("%d\n", count_words("", ' '));
    return 0;
}
