/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:25:51 by chenx             #+#    #+#             */
/*   Updated: 2026/07/30 00:42:06 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long num)
{
	int	len;

	len = (num <= 0);
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *str, long num, int len)
{
	int	negative;

	negative = (num < 0);
	if (negative)
	{
		str[0] = '-';
		num = -num;
	}
	while (len > negative)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_numlen((long)n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	ft_fill(str, (long)n, len);
	return (str);
}
