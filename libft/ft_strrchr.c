/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:34:59 by weast             #+#    #+#             */
/*   Updated: 2024/06/30 16:44:20 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*res;
	char	cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == cc)
			res = (char *) &str[i];
		i++;
	}
	if (str[i] == c)
		res = (char *) &str[i];
	return (res);
}
