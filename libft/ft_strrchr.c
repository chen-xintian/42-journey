/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 21:55:32 by chenx             #+#    #+#             */
/*   Updated: 2026/07/26 21:25:43 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;
	size_t		i;

	i = 0;
	last_occurrence = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_occurrence = &str[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return ((char *)last_occurrence);
}
