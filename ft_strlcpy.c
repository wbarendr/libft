/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:33:57 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/07 12:54:02 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	int				j;
	size_t			l;

	j = 0;
	i = 0;
	if (!dst || !src)
		return (0);
	l = dstsize;
	while (src[i])
		i++;
	while (dstsize > 0)
	{
		dst[j] = src[j];
		if (src[j] == 0)
			break ;
		j++;
		dstsize--;
	}
	if (l != 0)
		dst[(l - 1)] = 0;
	return (i);
}
