/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:29:25 by chenx             #+#    #+#             */
/*   Updated: 2026/07/13 00:34:43 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int	main(void)
{
	const char	*test;

	test = "Hello Wingstop!";
	write(1, "Testing ft_strlen:\n", 20);
	write(1, "Length of test string: ", 23);
	char	len_str[20];
	size_t	len = ft_strlen(test);
	int	i = 0;
	if (len == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (len > 0)
	{
		len_str[i++] = (len % 10) + '0';
		len /= 10;
	}
	while (i > 0)
		write(1, &len_str[--i], 1);
	write(1, "\n", 1);
	return (0);
}
