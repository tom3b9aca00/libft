/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:57:49 by tom               #+#    #+#             */
/*   Updated: 2026/11/10 21:20:18 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t total;

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	size_t			total;
// 	size_t			i;
// 	unsigned char *dest;

// 	dest = ft_calloc(atoi(argv[1]), atoi(argv[2]));
// 	total = atoi(argv[1]) * atoi(argv[2]);
// 	i = 0;
// 	while (i < total)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("%ld\n", total);
// }