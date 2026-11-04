/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:55:38 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 11:10:52 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while(n--)
		*ptr++ = c;
	return (s);
}


// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *str;
// 	int	n;

// 	str = argv[1];
// 	n = atoi(argv[3]);
// 	printf("%s\n", str);
// 	ft_memset(str, argv[2][0], n);
// 	printf("%s\n", str);
// }