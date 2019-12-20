/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 17:08:43 by wbarendr       #+#    #+#                */
/*   Updated: 2019/11/08 17:44:33 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_string(char *ptr, int n, int co)
{
	int i;

	i = 0;
	if (n < 0)
	{
		ptr[i] = '-';
		i++;
		n = n * -1;
	}
	ptr[co] = 0;
	co--;
	while (n >= 10)
	{
		ptr[co] = (n % 10) + 48;
		n = n / 10;
		co--;
	}
	ptr[co] = (n + 48);
	return (ptr);
}

static char	*min_int(int n)
{
	char	*ptr;
	int		i;

	i = 11;
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return (0);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[i] = 0;
	i--;
	n = 147483648;
	while (i >= 2)
	{
		ptr[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (ptr);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		co;
	int		save;

	if (n == -2147483648)
		return (min_int(n));
	save = n;
	co = 1;
	if (n < 0)
	{
		co++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		co++;
	}
	ptr = malloc(co + 1);
	if (ptr == 0)
		return (0);
	return (fill_string(ptr, save, (co)));
}
