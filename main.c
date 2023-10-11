/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:34:45 by tpicchio          #+#    #+#             */
/*   Updated: 2023/10/09 14:34:48 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

/*int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);*/
int ft_toupper(int c);
int ft_tolower(int c);
void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(int argv, char *argc[])
{
	char	s[] = "provaciao";
	char	dest[10] = "provaciao";
	printf("%s\n",(char *)memmove(&s[3], &s[2], 4));
	printf("%s\n",(char *)ft_memmove(&dest[2], dest, 4));
	//printf("%s\n",dest);
	
	argc[0][0] += 0;
	argv += 0;
	return (0);
}
