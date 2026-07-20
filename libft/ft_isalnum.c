/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 23:54:42 by chenx             #+#    #+#             */
/*   Updated: 2026/07/13 10:19:15 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	test;

	test = 'B';
	write(1, "Testing ft_isalnum:\n", 20);
	write(1, "Is test alnum? ", 15);
	if (ft_isalnum(test))
		write(1, "Yes\n", 4);
	else
		write(1, "No\n", 3);
	return (0);
}
