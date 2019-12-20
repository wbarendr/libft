/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:12:17 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/04 17:29:22 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *)b;
	while (len != 0)
	{
		ptr[i] = c;
		len--;
		i++;
	}
	return (b);
}
