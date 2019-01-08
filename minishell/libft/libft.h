/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:01:04 by smbonan           #+#    #+#             */
/*   Updated: 2018/09/20 11:48:46 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define BUFF_SIZE 100
# define MALL_CHECK(x) if (!x) return (-1);
# define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x == '\f')

int		ft_strlen(const char *str);
int		ft_toupper(int i);
int		ft_tolower(int i);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strcat(char	*restrict s1, const char *restrict s2);
int		ft_isdigit(int str);
int		ft_isascii(int i);
int		ft_isalpha(int str);
int		ft_isalnum(int i);
int		ft_isprint(int str);
int		ft_atoi(const char *str);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
char	*ft_strdup(const char *s1);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void(*f)(unsigned int, char *));
char	*ft_strmap(char	const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_memccpy(void	*restrict dst,
		const void *restrict src, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_strclr(char *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
void	*ft_memmove(void *dst, const void *src, size_t len);

# ifndef IS_SPACE
# define IS_SPACE(x) (x == ' ' || x == '\n' || x == '\t')
# endif

char	*ft_strjoinch(char const *s1, char c);
char 	*ft_strjoincl(char *s1, char *s2, int free_both);
char	*ft_strjoinchcl(char *s1, char c);

#endif
