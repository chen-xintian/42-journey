/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:37:00 by chenx             #+#    #+#             */
/*   Updated: 2026/07/13 10:19:09 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	test[20];

	write(1, "Testing ft_bzero:\n", 19);
	write(1, "Before bzero: ", 14);
	write(1, test, 20);
	ft_bzero(test, 20);
	write(1, "\nAfter bzero: ", 15);
	write(1, test, 20);
	write(1, "\n", 1);
	return (0);
}
