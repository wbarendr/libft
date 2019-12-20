/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:58:26 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/07 11:57:43 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;
	int		num;

	num = ((int)count * (int)size);
	i = 0;
	ptr = malloc(num);
	if (ptr == 0)
		return (0);
	while (i != (num))
	{
		ptr[i] = '\0';
		i++;
	}
	return (&ptr[0]);
}
