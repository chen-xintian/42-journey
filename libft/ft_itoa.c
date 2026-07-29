/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:25:51 by chenx             #+#    #+#             */
/*   Updated: 2026/07/30 00:37:07 by chenx            ###   ########.fr       */
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

static void	ft_fill(char *str, long num, int i)
{
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (i > (str[0] == '-'))
	{
		i--;
		str[i] = (num % 10) + '0';
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
