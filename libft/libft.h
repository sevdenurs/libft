#ifndef LIBFT
#define LIBFT

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>
#include <stddef.h>

size_t ft_strlen(const char *s);
size_t ft_strlcat(char *dest, const char *src, size_t size);
char *ft_strrchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void *ft_calloc(size_t count, size_t size);
void ft_bzero(void *s, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *str);
int ft_isalpha(int c);
int ft_toupper(int a);
int ft_tolower(int a);
int ft_atoi(const char *str);
int ft_isalnum(char str);
int ft_isascii(int a);
int ft_isdigit(int str);
int ft_isprint(char a);
int ft_memcmp(const void* ptr1, const void* ptr2, size_t num);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void* destination, const void* source, size_t num);
void *ft_memset(void *s,int c, size_t n);
char *ft_strchr(const char *str, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strjoin(const char *s1, const char *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));



void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);








#endif