/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:32:19 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/04 17:28:59 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;
	unsigned char	cptr;
	size_t			i;

	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	cptr = (unsigned char)c;
	i = 0;
	while (i != n)
	{
		dstptr[i] = srcptr[i];
		if (dstptr[i] == cptr)
			return ((void *)&dstptr[i + 1]);
		i++;
	}
	return (0);
}
