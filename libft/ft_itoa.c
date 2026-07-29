/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:25:51 by chenx             #+#    #+#             */
/*   Updated: 2026/07/30 00:03:57 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = n;
	len = (num <= 0);
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len > (n < 0))
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
