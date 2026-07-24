/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:55:29 by chenx             #+#    #+#             */
/*   Updated: 2026/07/24 15:18:49 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <ctype.h>

//---------- Prototypes ----------//

static void	test_ft_isalpha(void);
static void	test_ft_isdigit(void);
static void	test_ft_isalnum(void);
static void	test_ft_isascii(void);
static void	test_ft_isprint(void);
static void	test_ft_strlen(void);
static void	test_ft_memset(void);
static void	test_ft_bzero(void);
static void	test_ft_memcpy(void);
static void	test_ft_memmove(void);

//---------- Main ----------//

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	return (0);
}

//==================================================//
//                     ft_isalpha                    //
//==================================================//
static void	test_ft_isalpha(void)
{
	char	test;
	int		std;
	int		ft;

	test = '#';
	std = isalpha(test);
	ft = ft_isalpha(test);

	printf("========================================\n");
	printf("             ft_isalpha\n");
	printf("========================================\n");

	printf("Input        : '%c'\n", test);
	printf("isalpha      : %s\n", std ? "Yes" : "No");
	printf("ft_isalpha   : %s\n", ft ? "Yes" : "No");

	if ((std != 0) == (ft != 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                      ft_bzero                     //
//==================================================//
static void	test_ft_bzero(void)
{
	char	std[20] = "42 Singapore!";
	char	ft[20] = "42 Singapore!";
	int		i;

	printf("========================================\n");
	printf("              ft_bzero\n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Before bzero\n");

	printf("bzero       : %s\n", std);
	printf("ft_bzero    : %s\n", ft);

	// Test 2
	printf("\nTest 2: After bzero\n");

	bzero(std, sizeof(std));
	ft_bzero(ft, sizeof(ft));

	printf("bzero       : %s\n", std);
	printf("ft_bzero    : %s\n", ft);

	if (memcmp(std, ft, sizeof(std)) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Byte comparison\n");

	printf("bzero       : ");
	i = 0;
	while (i < (int)sizeof(std))
	{
		printf("%3d ", (unsigned char)std[i]);
		i++;
	}

	printf("\nft_bzero    : ");
	i = 0;
	while (i < (int)sizeof(ft))
	{
		printf("%3d ", (unsigned char)ft[i]);
		i++;
	}
	printf("\n");

	if (memcmp(std, ft, sizeof(std)) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_isalnum                    //
//==================================================//
static void	test_ft_isalnum(void)
{
	char	test;
	int		std;
	int		ft;

	test = 'B';
	std = isalnum(test);
	ft = ft_isalnum(test);

	printf("========================================\n");
	printf("             ft_isalnum\n");
	printf("========================================\n");

	printf("Input        : '%c'\n", test);
	printf("isalnum      : %s\n", std ? "Yes" : "No");
	printf("ft_isalnum   : %s\n", ft ? "Yes" : "No");

	if ((std != 0) == (ft != 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_isascii                    //
//==================================================//
static void	test_ft_isascii(void)
{
	char	test;
	int		std;
	int		ft;

	test = '\n';
	std = isascii(test);
	ft = ft_isascii(test);

	printf("========================================\n");
	printf("             ft_isascii\n");
	printf("========================================\n");

	printf("Input        : '\\n'\n");
	printf("isascii      : %s\n", std ? "Yes" : "No");
	printf("ft_isascii   : %s\n", ft ? "Yes" : "No");

	if ((std != 0) == (ft != 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_isdigit                    //
//==================================================//
static void	test_ft_isdigit(void)
{
	char	test;
	int		std;
	int		ft;

	test = '8';
	std = isdigit(test);
	ft = ft_isdigit(test);

	printf("========================================\n");
	printf("             ft_isdigit\n");
	printf("========================================\n");

	printf("Input        : '%c'\n", test);
	printf("isdigit      : %s\n", std ? "Yes" : "No");
	printf("ft_isdigit   : %s\n", ft ? "Yes" : "No");

	if ((std != 0) == (ft != 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_isprint                    //
//==================================================//
static void	test_ft_isprint(void)
{
	char	test;
	int		std;
	int		ft;

	test = '\t';
	std = isprint(test);
	ft = ft_isprint(test);

	printf("========================================\n");
	printf("             ft_isprint\n");
	printf("========================================\n");

	printf("Input        : '\\t'\n");
	printf("isprint      : %s\n", std ? "Yes" : "No");
	printf("ft_isprint   : %s\n", ft ? "Yes" : "No");

	if ((std != 0) == (ft != 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_memcpy                     //
//==================================================//
static void	test_ft_memcpy(void)
{
	char	src[] = "42 Singapore!";
	char	std[20];
	char	ft[20];
	char	*ret_std;
	char	*ret_ft;
	size_t	len;
	int		i;

	printf("\n========================================\n");
	printf("              ft_memcpy\n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Copy first 5 bytes\n");

	memset(std, 0, sizeof(std));
	memset(ft, 0, sizeof(ft));

	ret_std = memcpy(std, src, 5);
	ret_ft = ft_memcpy(ft, src, 5);

	printf("Source       : %s\n", src);
	printf("memcpy       : %s\n", std);
	printf("ft_memcpy    : %s\n", ft);

	if (memcmp(std, ft, sizeof(std)) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: n = 0\n");

	strcpy(std, "42 Singapore!");
	strcpy(ft, "42 Singapore!");

	len = 0;
	memcpy(std, src, len);
	ft_memcpy(ft, src, len);

	printf("Original     : 42 Singapore!\n");
	printf("memcpy       : %s\n", std);
	printf("ft_memcpy    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Copy entire string\n");

	len = strlen(src) + 1;

	memcpy(std, src, len);
	ft_memcpy(ft, src, len);

	printf("Source       : %s\n", src);
	printf("memcpy       : %s\n", std);
	printf("ft_memcpy    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Return value\n");

	printf("Destination  : %p\n", (void *)std);
	printf("memcpy       : %p\n", (void *)ret_std);
	printf("ft_memcpy    : %p\n", (void *)ret_ft);

	if (ret_std == std && ret_ft == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Byte comparison\n");

	printf("memcpy       : ");
	i = 0;
	while (i < (int)len)
	{
		printf("%3d ", (unsigned char)std[i]);
		i++;
	}

	printf("\nft_memcpy    : ");
	i = 0;
	while (i < (int)len)
	{
		printf("%3d ", (unsigned char)ft[i]);
		i++;
	}
	printf("\n");

	if (memcmp(std, ft, len) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_memset                     //
//==================================================//
static void	test_ft_memset(void)
{
	char	std[20] = "Chickens Ducks";
	char	ft[20] = "Chickens Ducks";
	char	*ret_std;
	char	*ret_ft;
	size_t	len;
	int		i;

	printf("\n========================================\n");
	printf("              ft_memset\n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Fill first 5 bytes\n");

	ret_std = memset(std, 'A', 5);
	ret_ft = ft_memset(ft, 'A', 5);

	printf("Original     : Chickens Ducks\n");
	printf("memset       : %s\n", std);
	printf("ft_memset    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: len = 0\n");

	strcpy(std, "Chickens Ducks");
	strcpy(ft, "Chickens Ducks");

	len = 0;
	memset(std, 'X', len);
	ft_memset(ft, 'X', len);

	printf("Original     : Chickens Ducks\n");
	printf("memset       : %s\n", std);
	printf("ft_memset    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Fill entire array\n");

	memset(std, 'Z', sizeof(std));
	ft_memset(ft, 'Z', sizeof(ft));

	printf("memset       : ");
	i = 0;
	while (i < (int)sizeof(std))
	{
		printf("%c", std[i]);
		i++;
	}

	printf("\nft_memset    : ");
	i = 0;
	while (i < (int)sizeof(ft))
	{
		printf("%c", ft[i]);
		i++;
	}
	printf("\n");

	if (memcmp(std, ft, sizeof(std)) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Return value\n");

	printf("Destination  : %p\n", (void *)std);
	printf("memset       : %p\n", (void *)ret_std);
	printf("ft_memset    : %p\n", (void *)ret_ft);

	if (ret_std == std && ret_ft == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_strlen                     //
//==================================================//
static void	test_ft_strlen(void)
{
	const char	*test1 = "Hello Wingstop!";
	const char	*test2 = "";
	const char	*test3 = "42";
	size_t		std_len;
	size_t		ft_len;

	printf("\n========================================\n");
	printf("               ft_strlen\n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal string\n");

	std_len = strlen(test1);
	ft_len = ft_strlen(test1);

	printf("Input        : \"%s\"\n", test1);
	printf("strlen       : %zu\n", std_len);
	printf("ft_strlen    : %zu\n", ft_len);

	if (std_len == ft_len)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Empty string\n");

	std_len = strlen(test2);
	ft_len = ft_strlen(test2);

	printf("Input        : \"%s\"\n", test2);
	printf("strlen       : %zu\n", std_len);
	printf("ft_strlen    : %zu\n", ft_len);

	if (std_len == ft_len)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Short string\n");

	std_len = strlen(test3);
	ft_len = ft_strlen(test3);

	printf("Input        : \"%s\"\n", test3);
	printf("strlen       : %zu\n", std_len);
	printf("ft_strlen    : %zu\n", ft_len);

	if (std_len == ft_len)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

//==================================================//
//                     ft_memmove                    //
//==================================================//

static void	test_ft_memmove(void)
{
	char	std1[30] = "Hello 42 Singapore!";
	char	ft1[30] = "Hello 42 Singapore!";
	char	std2[30] = "abcdef";
	char	ft2[30] = "abcdef";
	char	std3[30] = "abcdef";
	char	ft3[30] = "abcdef";
	char	*ret_std;
	char	*ret_ft;

	printf("\n========================================\n");
	printf("             ft_memmove\n");
	printf("========================================\n");

	// Test 1 //
	printf("\nTest 1: Normal Copy\n");

	ret_std = memmove(std1, std1 + 6, 12);
	ret_ft = ft_memmove(ft1, ft1 + 6, 12);

	printf("memmove      : %s\n", std1);
	printf("ft_memmove   : %s\n", ft1);

	if (strcmp(std1, ft1) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2 //
	printf("\nTest 2: Overlap (dest > src)\n");

	memmove(std2 + 2, std2, 4);
	ft_memmove(ft2 + 2, ft2, 4);

	printf("memmove      : %s\n", std2);
	printf("ft_memmove   : %s\n", ft2);

	if (strcmp(std2, ft2) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3 //
	printf("\nTest 3: Overlap (dest < src)\n");

	memmove(std3, std3 + 2, 4);
	ft_memmove(ft3, ft3 + 2, 4);

	printf("memmove      : %s\n", std3);
	printf("ft_memmove   : %s\n", ft3);

	if (strcmp(std3, ft3) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4 //
	printf("\nTest 4: Return value\n");

	printf("Destination  : %p\n", (void *)ft1);
	printf("memmove      : %p\n", (void *)ret_std);
	printf("ft_memmove   : %p\n", (void *)ret_ft);

	if (ret_std == std1 && ret_ft == ft1)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}
