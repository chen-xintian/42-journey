/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:42:34 by chenx             #+#    #+#             */
/*   Updated: 2026/07/24 16:59:58 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	val;
	int		idx;
	int		is_neg;

	idx = 0;
	while (ft_isspace(str[idx]))
		idx++;
	is_neg = 0;
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			is_neg = 1;
		idx++;
	}
	val = 0;
	while ('0' <= str[idx] && str[idx] <= '9')
	{
		val = (val * 10) + str[idx] - '0';
		idx++;
	}
	if (is_neg == 1)
		return ((int)(-1 * val));
	return ((int)val);
}
