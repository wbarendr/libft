/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 18:03:53 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/12 15:58:44 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			size;
	size_t			t;

	i = 0;
	t = ft_strlen(dst);
	size = ft_strlen(src);
	if (t >= dstsize || dstsize == 0)
		return (dstsize + size);
	if (size <= dstsize - t)
		ft_memcpy(dst + t, src, size + 1);
	else
		ft_memcpy(dst + t, src, dstsize - 1);
	dst[dstsize - 1] = 0;
	return (t + size);
}
