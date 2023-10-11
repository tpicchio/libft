/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:26:53 by tpicchio          #+#    #+#             */
/*   Updated: 2023/10/10 15:26:55 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;
	char	*dst;
	char	*s;

	if (!dest)
		return (NULL);
	dst = (char *) dest;
	s = (char *) src;
	cont = 0;
	while (cont < n)
	{
		dst[cont] = s[cont];
		cont++;
	}
	return (dest);
}
