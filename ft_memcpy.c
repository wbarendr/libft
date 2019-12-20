/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:48:31 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/04 17:26:57 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;
	int				i;

	i = 0;
	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (n != 0)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
		n--;
	}
	return (dst);
}
