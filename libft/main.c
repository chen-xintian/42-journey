/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:55:29 by chenx             #+#    #+#             */
/*   Updated: 2026/07/24 22:27:35 by chenx            ###   ########.fr       */
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
static void test_ft_strlcpy(void);
static void test_ft_strchr(void);
static void test_ft_strrchr(void);
static void test_ft_strncmp(void);
static void	test_ft_memset(void);
static void	test_ft_bzero(void);
static void	test_ft_memcpy(void);
static void	test_ft_memmove(void);
static void	test_ft_atoi(void);
static void test_ft_strlcat(void);
static void test_ft_toupper(void);
static void test_ft_tolower(void);

//---------- Main ----------//

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strncmp();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_atoi();
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

// ======================================== //
//                ft_strchr                 //
// ======================================== //

static void	test_ft_strchr(void)
{
	const char	*str;
	const char	*std;
	const char	*ft;
	char		test;

	printf("========================================\n");
	printf("                ft_strchr               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Character exists\n");

	str = "Hello 42!";
	test = '4';

	std = strchr(str, test);
	ft = ft_strchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '%c'\n", test);
	printf("strchr        : %s\n", std);
	printf("ft_strchr     : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Character does not exist\n");

	test = 'x';

	std = strchr(str, test);
	ft = ft_strchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '%c'\n", test);
	printf("strchr        : %p\n", (void *)std);
	printf("ft_strchr     : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: First character\n");

	test = 'H';

	std = strchr(str, test);
	ft = ft_strchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '%c'\n", test);
	printf("strchr        : %s\n", std);
	printf("ft_strchr     : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Null terminator\n");

	test = '\0';

	std = strchr(str, test);
	ft = ft_strchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '\\0'\n");
	printf("Offset        : %ld | %ld\n", std - str, ft - str);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Empty string\n");

	str = "";
	test = 'A';

	std = strchr(str, test);
	ft = ft_strchr(str, test);

	printf("String        : \"%s\"\n", str);
	printf("Character     : '%c'\n", test);
	printf("strchr        : %p\n", (void *)std);
	printf("ft_strchr     : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//                ft_strrchr                //
// ======================================== //

static void	test_ft_strrchr(void)
{
	const char	*str;
	const char	*std;
	const char	*ft;
	char		test;

	printf("========================================\n");
	printf("               ft_strrchr               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Character appears multiple times\n");

	str = "Hello 42 Hello!";
	test = 'l';

	std = strrchr(str, test);
	ft = ft_strrchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '%c'\n", test);
	printf("strrchr       : %s\n", std);
	printf("ft_strrchr    : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Character does not exist\n");

	test = 'x';

	std = strrchr(str, test);
	ft = ft_strrchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '%c'\n", test);
	printf("strrchr       : %p\n", (void *)std);
	printf("ft_strrchr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Last character\n");

	str = "Hello!";
	test = '!';

	std = strrchr(str, test);
	ft = ft_strrchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '%c'\n", test);
	printf("strrchr       : %s\n", std);
	printf("ft_strrchr    : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Null terminator\n");

	test = '\0';

	std = strrchr(str, test);
	ft = ft_strrchr(str, test);

	printf("String        : %s\n", str);
	printf("Character     : '\\0'\n");
	printf("Offset        : %ld | %ld\n", std - str, ft - str);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Empty string\n");

	str = "";
	test = 'A';

	std = strrchr(str, test);
	ft = ft_strrchr(str, test);

	printf("String        : \"%s\"\n", str);
	printf("Character     : '%c'\n", test);
	printf("strrchr       : %p\n", (void *)std);
	printf("ft_strrchr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//                ft_strncmp                //
// ======================================== //

static void	test_ft_strncmp(void)
{
	const char	*s1;
	const char	*s2;
	int			std;
	int			ft;

	printf("========================================\n");
	printf("               ft_strncmp               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Equal strings\n");

	s1 = "Hello 42!";
	s2 = "Hello 42!";

	std = strncmp(s1, s2, 20);
	ft = ft_strncmp(s1, s2, 20);

	printf("String 1      : %s\n", s1);
	printf("String 2      : %s\n", s2);
	printf("strncmp       : %d\n", std);
	printf("ft_strncmp    : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Different strings\n");

	s1 = "Hello";
	s2 = "Hemlo";

	std = strncmp(s1, s2, 5);
	ft = ft_strncmp(s1, s2, 5);

	printf("String 1      : %s\n", s1);
	printf("String 2      : %s\n", s2);
	printf("strncmp       : %d\n", std);
	printf("ft_strncmp    : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: n = 0\n");

	s1 = "Hello";
	s2 = "World";

	std = strncmp(s1, s2, 0);
	ft = ft_strncmp(s1, s2, 0);

	printf("String 1      : %s\n", s1);
	printf("String 2      : %s\n", s2);
	printf("strncmp       : %d\n", std);
	printf("ft_strncmp    : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Prefix comparison\n");

	s1 = "Hello";
	s2 = "Help!";

	std = strncmp(s1, s2, 3);
	ft = ft_strncmp(s1, s2, 3);

	printf("String 1      : %s\n", s1);
	printf("String 2      : %s\n", s2);
	printf("strncmp       : %d\n", std);
	printf("ft_strncmp    : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: One string shorter\n");

	s1 = "Hi";
	s2 = "High";

	std = strncmp(s1, s2, 5);
	ft = ft_strncmp(s1, s2, 5);

	printf("String 1      : %s\n", s1);
	printf("String 2      : %s\n", s2);
	printf("strncmp       : %d\n", std);
	printf("ft_strncmp    : %d\n", ft);

	if (std == ft)
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

// ======================================== //
//                ft_strlcpy                 //
// ======================================== //

static void	test_ft_strlcpy(void)
{
	char	std[20];
	char	ft[20];
	const char	*src;
	size_t	std_ret;
	size_t	ft_ret;

	printf("========================================\n");
	printf("               ft_strlcpy               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal copy\n");

	src = "Hello 42!";

	std_ret = strlcpy(std, src, sizeof(std));
	ft_ret = ft_strlcpy(ft, src, sizeof(ft));

	printf("Source       : %s\n", src);
	printf("strlcpy      : %s\n", std);
	printf("ft_strlcpy   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Destination too small\n");

	std_ret = strlcpy(std, src, 5);
	ft_ret = ft_strlcpy(ft, src, 5);

	printf("Source       : %s\n", src);
	printf("strlcpy      : %s\n", std);
	printf("ft_strlcpy   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Destination size = 0\n");

	std_ret = strlcpy(std, src, 0);
	ft_ret = ft_strlcpy(ft, src, 0);

	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Empty source string\n");

	src = "";

	std_ret = strlcpy(std, src, sizeof(std));
	ft_ret = ft_strlcpy(ft, src, sizeof(ft));

	printf("Source       : \"%s\"\n", src);
	printf("strlcpy      : \"%s\"\n", std);
	printf("ft_strlcpy   : \"%s\"\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//                ft_strlcat                 //
// ======================================== //

static void	test_ft_strlcat(void)
{
	char		std[20];
	char		ft[20];
	const char	*src;
	size_t		std_ret;
	size_t		ft_ret;

	printf("========================================\n");
	printf("               ft_strlcat               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal concatenation\n");

	strcpy(std, "Hello ");
	strcpy(ft, "Hello ");
	src = "42!";

	std_ret = strlcat(std, src, sizeof(std));
	ft_ret = ft_strlcat(ft, src, sizeof(ft));

	printf("Destination  : Hello \n");
	printf("Source       : %s\n", src);
	printf("strlcat      : %s\n", std);
	printf("ft_strlcat   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Destination buffer too small\n");

	strcpy(std, "42");
	strcpy(ft, "42");
	src = "Singapore!";

	std_ret = strlcat(std, src, sizeof(std));
	ft_ret = ft_strlcat(ft, src, sizeof(ft));

	printf("Destination  : 42\n");
	printf("Source       : %s\n", src);
	printf("strlcat      : %s\n", std);
	printf("ft_strlcat   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Destination size = 0\n");

	strcpy(std, "Hello");
	strcpy(ft, "Hello");
	src = "42";

	std_ret = strlcat(std, src, 0);
	ft_ret = ft_strlcat(ft, src, 0);

	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Empty source string\n");

	strcpy(std, "Hello");
	strcpy(ft, "Hello");
	src = "";

	std_ret = strlcat(std, src, sizeof(std));
	ft_ret = ft_strlcat(ft, src, sizeof(ft));

	printf("Destination  : Hello\n");
	printf("Source       : \"%s\"\n", src);
	printf("strlcat      : %s\n", std);
	printf("ft_strlcat   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Empty destination string\n");

	std[0] = '\0';
	ft[0] = '\0';
	src = "Hello 42!";

	std_ret = strlcat(std, src, sizeof(std));
	ft_ret = ft_strlcat(ft, src, sizeof(ft));

	printf("Destination  : \"\"\n");
	printf("Source       : %s\n", src);
	printf("strlcat      : %s\n", std);
	printf("ft_strlcat   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 6
	printf("\nTest 6: Destination already full\n");

	strcpy(std, "Hello");
	strcpy(ft, "Hello");
	src = "42";

	std_ret = strlcat(std, src, 5);
	ft_ret = ft_strlcat(ft, src, 5);

	printf("Destination  : Hello\n");
	printf("Source       : %s\n", src);
	printf("strlcat      : %s\n", std);
	printf("ft_strlcat   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//                ft_toupper                //
// ======================================== //

static void	test_ft_toupper(void)
{
	int	std;
	int	ft;
	int	test;

	printf("========================================\n");
	printf("               ft_toupper               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Lowercase letter\n");

	test = 'a';
	std = toupper(test);
	ft = ft_toupper(test);

	printf("Input         : '%c'\n", test);
	printf("toupper       : '%c'\n", std);
	printf("ft_toupper    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Uppercase letter\n");

	test = 'Z';
	std = toupper(test);
	ft = ft_toupper(test);

	printf("Input         : '%c'\n", test);
	printf("toupper       : '%c'\n", std);
	printf("ft_toupper    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Digit\n");

	test = '5';
	std = toupper(test);
	ft = ft_toupper(test);

	printf("Input         : '%c'\n", test);
	printf("toupper       : '%c'\n", std);
	printf("ft_toupper    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Symbol\n");

	test = '#';
	std = toupper(test);
	ft = ft_toupper(test);

	printf("Input         : '%c'\n", test);
	printf("toupper       : '%c'\n", std);
	printf("ft_toupper    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Newline character\n");

	test = '\n';
	std = toupper(test);
	ft = ft_toupper(test);

	printf("Input         : '\\n'\n");
	printf("toupper       : %d\n", std);
	printf("ft_toupper    : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//                ft_tolower                //
// ======================================== //

static void	test_ft_tolower(void)
{
	int	std;
	int	ft;
	int	test;

	printf("========================================\n");
	printf("               ft_tolower               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Uppercase letter\n");

	test = 'A';
	std = tolower(test);
	ft = ft_tolower(test);

	printf("Input         : '%c'\n", test);
	printf("tolower       : '%c'\n", std);
	printf("ft_tolower    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Lowercase letter\n");

	test = 'z';
	std = tolower(test);
	ft = ft_tolower(test);

	printf("Input         : '%c'\n", test);
	printf("tolower       : '%c'\n", std);
	printf("ft_tolower    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Digit\n");

	test = '5';
	std = tolower(test);
	ft = ft_tolower(test);

	printf("Input         : '%c'\n", test);
	printf("tolower       : '%c'\n", std);
	printf("ft_tolower    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Symbol\n");

	test = '#';
	std = tolower(test);
	ft = ft_tolower(test);

	printf("Input         : '%c'\n", test);
	printf("tolower       : '%c'\n", std);
	printf("ft_tolower    : '%c'\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Newline character\n");

	test = '\n';
	std = tolower(test);
	ft = ft_tolower(test);

	printf("Input         : '\\n'\n");
	printf("tolower       : %d\n", std);
	printf("ft_tolower    : %d\n", ft);

	if (std == ft)
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

//==================================================//
//                     ft_atoi                       //
//==================================================//
static void	test_ft_atoi(void)
{
	const char	*test1 = "5201314";
	const char	*test2 = "   -42";
	const char	*test3 = "42 Singapore!";
	int			std;
	int			ft;

	printf("========================================\n");
	printf("               ft_atoi\n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Positive number\n");

	std = atoi(test1);
	ft = ft_atoi(test1);

	printf("Input        : \"%s\"\n", test1);
	printf("atoi         : %d\n", std);
	printf("ft_atoi      : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Leading spaces and negative sign\n");

	std = atoi(test2);
	ft = ft_atoi(test2);

	printf("Input        : \"%s\"\n", test2);
	printf("atoi         : %d\n", std);
	printf("ft_atoi      : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Stop at first non-digit\n");

	std = atoi(test3);
	ft = ft_atoi(test3);

	printf("Input        : \"%s\"\n", test3);
	printf("atoi         : %d\n", std);
	printf("ft_atoi      : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}