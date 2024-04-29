/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:14:59 by weast             #+#    #+#             */
/*   Updated: 2024/04/16 17:32:35 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(char c)
{
	return (31 < c && c < 127);
}
