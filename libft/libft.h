/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:55:31 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/24 21:30:19 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_isupper(int c);

int		ft_islower(int c);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_isspace(int c);

size_t	ft_strlen(const char *s);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t len);

char	*ft_strcat(char *dst, const char *src);

char	*ft_strncat(char *dst, const char *src, size_t len);

size_t	ft_strlcat(char *dst, const char *src, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char    *ft_strdup(const char *s);

char    *ft_substr(const char *s, size_t start, size_t len);

char    *ft_strjoin(const char *s1, const char *s2);

char    *ft_strtrim(const char *s, const char *set);

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));

void    ft_striteri(char *s, void (*f)(unsigned int, char *));

char    **ft_split(const char *s, char c);

void	*ft_bzero(void *s, size_t len);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t len);

void	*ft_memrchr(const void *s, int c, size_t len);

int		ft_memcmp(const void *s1, const void *s2, size_t len);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_atoi(const char *s);

char    *ft_itoa(int c);

void	*ft_calloc(size_t count, size_t size);

void    ft_putchar_fd(char c, int fd);

size_t  ft_putchar(char c);

void    ft_putstr_fd(const char *s, int fd);

size_t  ft_putstr(const char *s);

void    ft_putendl_fd(const char *s, int fd);

void    ft_putnbr_fd(int n, int fd);

size_t  ft_putnbr(int n);

size_t  ft_putunbr(unsigned int n);

size_t  ft_puthex_lower(long unsigned int n);

size_t  ft_puthex_upper(long unsigned int n);

size_t  ft_putaddr(void *ptr);

#endif
