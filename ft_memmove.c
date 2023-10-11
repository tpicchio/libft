/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <tpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:51:17 by tpicchio          #+#    #+#             */
/*   Updated: 2023/10/11 17:40:03 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{	
	char	*dst;
	char	*s;
	int		cont;

	if (!dest || !src)
		return (NULL);
	dst = (char *) dest;
	s = (char *) src;
	if (dst > s)
	{
		cont = (int) n - 1;
		while (cont >= 0)
		{
			dst[cont] = s[cont];
			cont--;
		}
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
