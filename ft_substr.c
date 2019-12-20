/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:18:02 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/06 18:44:44 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (ft_strlen(s) >= start + len)
		ptr = malloc(len + 1);
	else
		ptr = malloc(ft_strlen(s) - start + 1);
	if (ptr == 0)
		return (0);
	while (len != 0 && s[start] != 0)
	{
		ptr[i] = s[start];
		len--;
		i++;
		start++;
	}
	ptr[i] = 0;
	return (&ptr[0]);
}
