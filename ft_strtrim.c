/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonyacorcoran <sonyacorcoran@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:34:36 by sonyacorcor       #+#    #+#             */
/*   Updated: 2023/08/21 17:12:44 by sonyacorcor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	ptr = ft_strdup("");
	if (start == ft_strlen(s1))
	{
		if (!ptr)
			return (NULL);
		else
			return (ptr);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	ptr = ft_substr(s1, start, end - start);
	return (ptr);
}
