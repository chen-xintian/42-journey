/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 22:47:01 by chenx             #+#    #+#             */
/*   Updated: 2026/07/12 23:47:42 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	test;

	test = '#';
	write(1, "Testing ft_isalpha:\n", 20);
	write(1, "Is test alpha? ", 15);
	if (ft_isalpha(test))
		write(1, "Yes\n", 4);
	else
		write(1, "No\n", 3);
	return (0);
}
