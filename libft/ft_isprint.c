/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:26:02 by chenx             #+#    #+#             */
/*   Updated: 2026/07/13 00:28:18 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	test;

	test = '\t';
	write(1, "Testing ft_isprint:\n", 20);
	write(1, "Is test printable? ", 19);
	if (ft_isprint(test))
		write(1, "Yes\n", 4);
	else
		write(1, "No\n", 3);
	return (0);
}
