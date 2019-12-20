/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:50:07 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/04 17:29:04 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	unsigned char	l;
	int				i;

	ptrs = (unsigned char *)s;
	l = (unsigned char)c;
	i = 0;
	while (n != 0)
	{
		if (ptrs[i] == l)
			break ;
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (&ptrs[i]);
}
