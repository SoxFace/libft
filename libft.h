/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonyacorcoran <sonyacorcoran@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:17:43 by scorcora          #+#    #+#             */
/*   Updated: 2023/08/24 12:29:25 by sonyacorcor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

// string compare
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// compare two blocks of memory: equal(0), s1 < s2 (-1), s1 > s2 (1)
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// include <string.h> copy memory area
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
// include <string.h> copy byte string
void	*ft_memmove(void *dst, const void *src, size_t len);
// iterate through each byte of memeory and set it to zero (i.e memset)
void	ft_bzero(void *s, size_t n);
// search for a specific byte value within a block of memory
void	*ft_memchr(const void *s, int c, size_t n);
// contiguously allocates memory for an array of elements, initialized to zero
void	*ft_calloc(size_t count, size_t size);
// fill memory with a value
void	*ft_memset(void *b, int c, size_t len);

// Find length of string O(n)
size_t	ft_strlen(const char *s);
// copy strings without causing buffer overflow
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// safely concat strings
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// Save a copy of a string (duplicate)
char	*ft_strdup(const char *s1);
// concat two strings
char	*ft_strjoin(char const *s1, char const *s2);
// create a sub string
char	*ft_substr(char const *s, unsigned int start, size_t len);
// searches for first occurrence of a character in a string
// and returns a pointer to that character or NULL if the character is not found
char	*ft_strchr(const char *s, int c);
// searches for last occurrence of a character in a string
char	*ft_strrchr(const char *s, int c);
// limit the search to a specific number of characters within the source string
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
// Allocates memory and returns a copy of ’s1’ with the characters
// specified in ’set’ removed from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set);
// split a string into an array
char	**ft_split(char const *s, char c);
// convert interget to ascii - malloc
char	*ft_itoa(int n);
// maps each character of a string while considering an index
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// each iternation over a string while using an index
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// write char to file
void	ft_putchar_fd(char c, int fd);
// write string to file
void	ft_putstr_fd(char *s, int fd);
// write new line at end of file
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
