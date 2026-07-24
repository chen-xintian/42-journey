/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 21:55:32 by chenx             #+#    #+#             */
/*   Updated: 2026/07/24 22:00:08 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_occurrence = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last_occurrence);
}
