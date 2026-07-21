/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:55:29 by chenx             #+#    #+#             */
/*   Updated: 2026/07/21 17:07:29 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//----------for fr_bzero.c-----------//
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	std[20] = "Hello 42!";
	char	ft[20] = "Hello 42!";
	int		i;

	printf("========== Test 1: Before bzero ==========\n");
	printf("bzero    : %s\n", std);
	printf("ft_bzero : %s\n", ft);

	bzero(std, sizeof(std));
	ft_bzero(ft, sizeof(ft));

	printf("\n========== Test 2: After bzero ==========\n");
	printf("bzero    : %s\n", std);
	printf("ft_bzero : %s\n", ft);

	printf("\n========== Test 3: Byte values ==========\n");

	printf("bzero    : ");
	i = 0;
	while (i < (int)sizeof(std))
	{
		printf("%d ", (unsigned char)std[i]);
		i++;
	}

	printf("\nft_bzero : ");
	i = 0;
	while (i < (int)sizeof(ft))
	{
		printf("%d ", (unsigned char)ft[i]);
		i++;
	}

	printf("\n");

	if (memcmp(std, ft, sizeof(std)) == 0)
		printf("\nPASS ✅\n");
	else
		printf("\nFAIL ❌\n");

	return (0);
}

//---------for ft_isalnum.c---------//
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

//-----------for ft_isalpha.c-----------//
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

//-----------for ft_isascii.c-----------//
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

//-----------for ft_isdigit.c-----------//
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

//-----------for ft_isprint.c-----------//
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

//-----------for ft_memcpy.c-----------//
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "Hello 42!";
	char	std[20];
	char	ft[20];
	char	*ret_std;
	char	*ret_ft;
	size_t	len;
	int		i;

	printf("========== Test 1: Copy first 5 bytes ==========\n");

	memset(std, 0, sizeof(std));
	memset(ft, 0, sizeof(ft));

	ret_std = memcpy(std, src, 5);
	ret_ft = ft_memcpy(ft, src, 5);

	printf("Source     : %s\n", src);
	printf("memcpy     : %s\n", std);
	printf("ft_memcpy  : %s\n", ft);

	if (memcmp(std, ft, sizeof(std)) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 2: n = 0 ==========\n");

	strcpy(std, "ABCDEFGHIJ");
	strcpy(ft, "ABCDEFGHIJ");

	len = 0;
	memcpy(std, src, len);
	ft_memcpy(ft, src, len);

	printf("memcpy     : %s\n", std);
	printf("ft_memcpy  : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 3: Copy entire string ==========\n");

	len = strlen(src) + 1;

	memcpy(std, src, len);
	ft_memcpy(ft, src, len);

	printf("memcpy     : %s\n", std);
	printf("ft_memcpy  : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 4: Return Value ==========\n");

	printf("std address      : %p\n", (void *)std);
	printf("memcpy returned  : %p\n", (void *)ret_std);

	printf("ft address       : %p\n", (void *)ft);
	printf("ft_memcpy return : %p\n", (void *)ret_ft);

	if (ret_ft == ft)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 5: Byte Comparison ==========\n");

	printf("memcpy     : ");
	i = 0;
	while (i < (int)len)
	{
		printf("%d ", (unsigned char)std[i]);
		i++;
	}

	printf("\nft_memcpy  : ");
	i = 0;
	while (i < (int)len)
	{
		printf("%d ", (unsigned char)ft[i]);
		i++;
	}
	printf("\n");

	if (memcmp(std, ft, len) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	return (0);
}

//-----------for ft_memset.c-----------//
#include <unistd.h> 
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char	std[20] = "Hello World!";
	char	ft[20] = "Hello World!";
	char	*ret_std;
	char	*ret_ft;
	int		i;

	printf("========== Test 1: Fill first 5 bytes ==========\n");

	ret_std = memset(std, 'A', 5);
	ret_ft = ft_memset(ft, 'A', 5);

	printf("memset    : %s\n", std);
	printf("ft_memset : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 2: len = 0 ==========\n");

	strcpy(std, "Hello World!");
	strcpy(ft, "Hello World!");

	size_t len = 0;
	memset(std, 'X', len);
	ft_memset(ft, 'X', len);

	printf("memset    : %s\n", std);
	printf("ft_memset : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 3: Fill entire array ==========\n");

	memset(std, 'Z', sizeof(std));
	ft_memset(ft, 'Z', sizeof(ft));

	printf("memset    : ");
	i = 0;
	while (i < (int)sizeof(std))
	{
		printf("%c", std[i]);
		i++;
	}

	printf("\nft_memset : ");
	i = 0;
	while (i < (int)sizeof(ft))
	{
		printf("%c", ft[i]);
		i++;
	}
	printf("\n");

	printf("\n========== Test 4: Return Value ==========\n");

	printf("Original address : %p\n", (void *)std);
	printf("memset returned  : %p\n", (void *)ret_std);
	printf("ft_memset return : %p\n", (void *)ret_ft);

	if (ret_ft == ft)
		printf("PASS\n");
	else
		printf("FAIL\n");

	return (0);
}

//-----------for ft_strlen.c-----------//
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*test1 = "Hello Wingstop!";
	const char	*test2 = "";
	const char	*test3 = "42";
	size_t		std_len;
	size_t		ft_len;

	printf("========== Test 1: Normal String ==========\n");

	std_len = strlen(test1);
	ft_len = ft_strlen(test1);

	printf("String      : \"%s\"\n", test1);
	printf("strlen      : %zu\n", std_len);
	printf("ft_strlen   : %zu\n", ft_len);

	if (std_len == ft_len)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 2: Empty String ==========\n");

	std_len = strlen(test2);
	ft_len = ft_strlen(test2);

	printf("String      : \"%s\"\n", test2);
	printf("strlen      : %zu\n", std_len);
	printf("ft_strlen   : %zu\n", ft_len);

	if (std_len == ft_len)
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("\n========== Test 3: Short String ==========\n");

	std_len = strlen(test3);
	ft_len = ft_strlen(test3);

	printf("String      : \"%s\"\n", test3);
	printf("strlen      : %zu\n", std_len);
	printf("ft_strlen   : %zu\n", ft_len);

	if (std_len == ft_len)
		printf("PASS\n");
	else
		printf("FAIL\n");

	return (0);
}