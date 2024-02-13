/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:12:39 by bakdogan          #+#    #+#             */
/*   Updated: 2024/02/13 19:55:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	l_strlen(const char *str);
size_t	l_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	l_strlcat(char *dst, const char *src, size_t dstsize);
int		l_atoi(const char *str);
void	l_bzero(void *s, size_t n);
void	*l_calloc(size_t count, size_t size);
int		l_isalnum(int x);
int		l_isalpha(int x);
int		l_isascii(int x);
int		l_isdigit(int x);
int		l_isprint(int c);
char	*l_itoa(int n);
void	*l_memchr(const void *s, int c, size_t n);
int		l_memcmp(const void *s1, const void *s2, size_t n);
void	*l_memcpy(void *dst, const void *src, size_t n);
void	*l_memmove(void *s1, const void *s2, size_t n);
void	*l_memset(void *b, int c, size_t len);
void	l_putchar_fd(char c, int fd);
void	l_putendl_fd(char *s, int fd);
void	l_putnbr_fd(int n, int fd);
void	l_putstr_fd(char const *s, int fd);
char	**l_split(const char *s, char c);
char	*l_strchr(const char *s, int c);
char	*l_strdup(const char *str);
void	l_striteri(char *s, void (*f)(unsigned int, char *));
char	*l_strjoin(char const *s1, char const *s2);
char	*l_strmapi(char const *s, char (*f)(unsigned int, char));
int		l_strncmp(const char *s1, char *s2, size_t n);
char	*l_strnstr(const char *haystack, const char *needle, size_t len);
char	*l_strrchr(const char *s, int c);
char	*l_strtrim(char const *s1, char const *set);
char	*l_substr(const char *s, unsigned int start, size_t len);
int		l_tolower(int x);
int		l_toupper(int x);

#endif