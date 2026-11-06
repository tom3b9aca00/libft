/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:20:35 by tom               #+#    #+#             */
/*   Updated: 2026/11/06 13:18:36 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	t_list *list;

// 	list = ft_lstnew(argv[1]);
// 	ft_lstadd_front(&list, ft_lstnew(argv[2]));
// 	ft_lstadd_front(&list, ft_lstnew(argv[3]));
// 	printf("%d\n", ft_lstsize(list));
// }