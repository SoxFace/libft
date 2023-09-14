/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonyacorcoran <sonyacorcoran@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:28:38 by sonyacorcor       #+#    #+#             */
/*   Updated: 2023/08/21 16:42:24 by sonyacorcor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1) + 1;
	new = malloc(sizeof(char) * len);
	if (!new)
		return (0);
	new = ft_memcpy(new, s1, len);
	return (new);
}
