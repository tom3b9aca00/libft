/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:45:12 by tom               #+#    #+#             */
/*   Updated: 2026/11/06 13:00:44 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	t_list *list;

// 	(void)argc;
// 	list = ft_lstnew(argv[1]);
// 	ft_lstadd_front(&list, ft_lstnew(argv[2]));
// 	ft_lstadd_front(&list, ft_lstnew(argv[3]));
// 	printf("%s\n", (char *)ft_lstlast(list)->content);
// }