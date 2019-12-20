/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:49:13 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/06 16:18:26 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		ptr[i] = 0;
		n--;
		i++;
	}
}
