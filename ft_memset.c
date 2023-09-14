/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonyacorcoran <sonyacorcoran@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:18:23 by sonyacorcor       #+#    #+#             */
/*   Updated: 2023/08/21 16:26:28 by sonyacorcor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		byte_ptr[i] = c;
		i++;
	}
	return (b = byte_ptr);
}
