/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:57:49 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 13:30:14 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t all_size;

	all_size = nmemb * size;
	ptr = malloc(all_size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, all_size);
	return (ptr);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%p\n", ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2])));
// 	printf("%p\n", calloc(ft_atoi(argv[1]), ft_atoi(argv[2])));

// }
