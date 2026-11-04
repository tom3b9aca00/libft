/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:00:52 by tom               #+#    #+#             */
/*   Updated: 2026/11/04 15:59:13 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_len(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		len ++;
	}
	return (len);
}
char *ft_itoa(int n)
{
	char *dest;
	int	i;
	int sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = is_len(n);
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	sign = 0;
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
		sign = 1;
	}
	while (i > sign)
	{
		i--;
		dest[i] = (n % 10) + 48;
		n /= 10;
	}
	return (dest);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	printf("%s\n", ft_itoa(atoi(argv[1])));
// }