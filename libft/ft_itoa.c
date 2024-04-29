/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:28:49 by weast             #+#    #+#             */
/*   Updated: 2024/04/29 18:04:32 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	get_int_len(int n)
    {
        int	i;

        i = !n;
        while (n)
            {
                i++;
                n /=10;
            }
        return (i);
    }

char *ft_itoa(int n)
{
    char	out;
    char	*res;
    int	is_neg;

    if (n < 0)
        is_neg = 1;
    else
        is_neg = 0;

    res = (char *)malloc(sizeof(char) * get_int_len(n) + is_neg + 1);

    if (nb < 0)
    {



    }

}
#include <stdio.h>
int main(void) {
    printf("%d\n", !-123);
    return 0;
}
