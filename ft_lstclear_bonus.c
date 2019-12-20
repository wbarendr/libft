/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 19:25:00 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/09 17:04:28 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;
	t_list *temp;

	if (!lst)
		return ;
	temp = *lst;
	while (temp)
	{
		ptr = temp->next;
		del(temp->content);
		if (temp)
			free(temp);
		temp = ptr;
	}
	*lst = 0;
}
