/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 21:22:22 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/09 17:22:12 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *temp;

	ptr = malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (lst)
	{
		temp->content = f(lst->content);
		lst = lst->next;
		temp->next = malloc(sizeof(t_list));
		if (temp->next == NULL)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		temp = temp->next;
	}
	temp = NULL;
	return (ptr);
}
