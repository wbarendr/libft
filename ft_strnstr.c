/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:26:58 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/12 15:15:05 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		k;

	k = 0;
	i = 0;
	if (needle[i] == 0)
		return ((char *)&haystack[i]);
	while (i != len && haystack[i] != 0)
	{
		if (haystack[i] == needle[k])
		{
			j = i;
			while (haystack[j] == needle[k] && needle[k] != '\0' && j != len)
			{
				j++;
				k++;
			}
		}
		if (needle[k] == 0)
			return ((char *)&haystack[i]);
		k = 0;
		i++;
	}
	return (NULL);
}
