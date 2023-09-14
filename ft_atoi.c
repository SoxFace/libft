/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonyacorcoran <sonyacorcoran@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:15:36 by sonyacorcor       #+#    #+#             */
/*   Updated: 2023/08/17 15:43:58 by sonyacorcor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		str++;
	}
	return (result * sign);
}

// // TEST
// int	main(int ac, char **av)
// {
// 	int	mine;
// 	int	theirs;

// 	if (ac == 2)
// 	{
// 		mine = ft_atoi(av[1]);
// 		theirs = atoi(av[1]);
// 		printf("Mine: %d | Theirs: %d\n", mine, theirs);
// 	}
// 	return (0);
// }
