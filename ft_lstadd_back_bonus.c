/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 15:11:43 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/07 16:55:29 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *ptr;

	if (*alst == NULL)
		*alst = new;
	else
	{
		ptr = ft_lstlast(*alst);
		ptr->next = new;
	}
}
