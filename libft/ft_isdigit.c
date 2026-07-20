/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 23:43:57 by chenx             #+#    #+#             */
/*   Updated: 2026/07/12 23:49:34 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	test;

	test = '8';
	write(1, "Testing ft_isdigit:\n", 20);
	write(1, "Is test digit? ", 15);
	if (ft_isdigit(test))
		write(1, "Yes\n", 4);
	else
		write(1, "No\n", 3);
	return (0);
}
