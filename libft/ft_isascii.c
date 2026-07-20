/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:20:44 by chenx             #+#    #+#             */
/*   Updated: 2026/07/13 00:23:26 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	test;

	test = '\n';
	write(1, "Testing ft_isascii:\n", 20);
	write(1, "Is test ascii? ", 15);
	if (ft_isascii(test))
		write(1, "Yes\n", 4);
	else
		write(1, "No\n", 3);
	return (0);
}
