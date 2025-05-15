/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:15:17 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/15 11:24:51 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char *s);
void	*ft_memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
// ft_strlcat();
// ft_strchr();
// ft_strrchr();
// ft_strncmp();
// ft_memchr();
// ft_memcmp();
// ft_strnstr();
// int		ft_atoi(const char *str);
// ft_substr();
// ft_strjoin();
// ft_strtrim();
// ft_split();
// ft_itoa();
// ft_strmapi();
// ft_striteri();
// ft_putchar_fd();
// ft_putstr_fd();
// ft_putendl_fd();
// ft_putnbr_fd();

char	ft_tolower(char c);
char	ft_toupper(char c);

#endif
