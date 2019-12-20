/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 12:59:10 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/12 12:10:19 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_string(char const *s1, char const *set, char *p1, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (set[j] != 0 && s1[i] != 0)
	{
		while (s1[i] != set[j] && set[j] != 0)
			j++;
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
	}
	j = 0;
	while (j < len)
	{
		p1[j] = s1[i];
		j++;
		i++;
	}
	p1[j] = 0;
	return (&p1[0]);
}

static char	*make_string(char const *s1, char const *set, int co)
{
	int		i;
	char	*p;
	int		j;
	int		len;

	j = 0;
	len = ft_strlen(s1);
	i = len - 1;
	while (set[j] != 0 && i != 0 && len != co)
	{
		while (s1[i] != set[j] && set[j] != 0)
			j++;
		if (s1[i] == set[j])
		{
			co++;
			i--;
			j = 0;
		}
	}
	p = malloc(len - co + 1);
	if (p == 0)
		return (0);
	return (fill_string(s1, set, p, (len - co)));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		co;
	int		j;
	char	*ptr;

	j = 0;
	i = 0;
	co = 0;
	if (!s1 || !set)
		return (0);
	while (set[j] != 0 && s1[i] != 0)
	{
		while (s1[i] != set[j] && set[j] != 0)
			j++;
		if (s1[i] == set[j] && s1[i] != 0)
		{
			co++;
			i++;
			j = 0;
		}
	}
	ptr = make_string(s1, set, co);
	if (ptr == NULL)
		return (NULL);
	return (&ptr[0]);
}
