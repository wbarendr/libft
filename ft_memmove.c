/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:57:59 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/06 22:20:10 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*ptrdst;
	unsigned char			*ptrsrc;
	size_t					i;

	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (&ptrdst[i] >= &ptrsrc[i])
		while (0 < len)
		{
			ptrdst[len - 1] = ptrsrc[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			ptrdst[i] = ptrsrc[i];
			i++;
		}
	return (dst);
}
