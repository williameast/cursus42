/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:16:23 by weast             #+#    #+#             */
/*   Updated: 2024/04/29 15:57:52 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(int c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *source, size_t n);
void	*ft_memmove(void *dest, const void *source, size_t n);
void	*ft_memset(void *b, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, const char *source, size_t n);
size_t	ft_strlcpy(char *dest, const char *source, size_t destsize);
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *str, const char *pattern, size_t len);
char	*ft_strrchr(const char *str, int c);
char	ft_tolower(char c);
char	ft_toupper(char c);
#endif // LIBFT_H
