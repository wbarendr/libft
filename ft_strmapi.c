/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:27:02 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/04 17:30:45 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	char			*ptr;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
		i++;
	ptr = malloc(i + 1);
	if (ptr == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
