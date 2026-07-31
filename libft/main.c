/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:55:29 by chenx             #+#    #+#             */
/*   Updated: 2026/07/31 17:55:12 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <ctype.h>
#include <bsd/string.h>
#include <fcntl.h>

//---------- Prototypes ----------//

static void	test_ft_isalpha(void);
static void	test_ft_isdigit(void);
static void	test_ft_isalnum(void);
static void	test_ft_isascii(void);
static void	test_ft_isprint(void);
static void test_ft_toupper(void);
static void test_ft_tolower(void);
static void	test_ft_strlen(void);
static void test_ft_strlcpy(void);
static void test_ft_strchr(void);
static void test_ft_strrchr(void);
static void test_ft_strncmp(void);
static void test_ft_strnstr(void);
static void	test_ft_memset(void);
static void	test_ft_bzero(void);
static void	test_ft_memcpy(void);
static void	test_ft_memmove(void);
static void test_ft_memchr(void);
static void test_ft_memcmp(void);
static void	test_ft_atoi(void);
static void test_ft_strlcat(void);
static void test_ft_strdup(void);
static void test_ft_calloc(void);
static void test_ft_substr(void);
static void test_ft_strjoin(void);
static void test_ft_strtrim(void);
static void test_ft_split(void);
static void test_ft_itoa(void);
static void test_ft_strmapi(void);
static void test_ft_striteri(void);
static void test_ft_putchar_fd(void);
static void test_ft_putstr_fd(void);
static void test_ft_putendl_fd(void);
static void test_ft_putnbr_fd(void);
static void test_ft_lstnew(void);
static void test_ft_lstadd_front(void);
static void test_ft_lstsize(void);
static void test_ft_lstlast(void);
static void test_ft_lstadd_back(void);
static void test_ft_lstdelone(void);
static void test_ft_lstclear(void);
//---------- Main ----------//

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strnstr();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strncmp();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strdup();
	test_ft_calloc();
	test_ft_atoi();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_lstnew();
	test_ft_lstadd_front();
	test_ft_lstsize();
	test_ft_lstlast();
	test_ft_lstadd_back();
	test_ft_lstdelone();
	test_ft_lstclear();
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
//                ft_memchr                 //
// ======================================== //
static void	test_ft_memchr(void)
{
	const char			*str;
	const char			*std;
	const char			*ft;
	const unsigned char	data[] = {1, 2, 3, 0, 4, 5};
	const unsigned char	*std_bin;
	const unsigned char	*ft_bin;
	size_t				n;

	printf("========================================\n");
	printf("                ft_memchr               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Character found\n");

	str = "Hello 42!";
	n = strlen(str);

	std = memchr(str, '4', n);
	ft = ft_memchr(str, '4', n);

	printf("String       : %s\n", str);
	printf("Search       : '4'\n");
	printf("memchr       : %s\n", std);
	printf("ft_memchr    : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Character not found\n");

	std = memchr(str, 'X', n);
	ft = ft_memchr(str, 'X', n);

	printf("String       : %s\n", str);
	printf("Search       : 'X'\n");
	printf("memchr       : %p\n", (void *)std);
	printf("ft_memchr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Search for null terminator\n");

	std = memchr(str, '\0', strlen(str) + 1);
	ft = ft_memchr(str, '\0', strlen(str) + 1);

	printf("Search       : '\\0'\n");
	printf("memchr       : %p\n", (void *)std);
	printf("ft_memchr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: n = 0\n");

	std = memchr(str, 'H', 0);
	ft = ft_memchr(str, 'H', 0);

	printf("Search       : 'H'\n");
	printf("memchr       : %p\n", (void *)std);
	printf("ft_memchr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Binary data\n");

	std_bin = memchr(data, 0, sizeof(data));
	ft_bin = ft_memchr(data, 0, sizeof(data));

	printf("Search       : byte 0\n");
	printf("memchr       : %p\n", (void *)std_bin);
	printf("ft_memchr    : %p\n", (void *)ft_bin);

	if (std_bin == ft_bin)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}


// ======================================== //
//                ft_memcmp                 //
// ======================================== //

static void	test_ft_memcmp(void)
{
	const char	*s1;
	const char	*s2;
	int			std;
	int			ft;
	unsigned char	a[] = {1, 2, 3, 4, 5};
	unsigned char	b[] = {1, 2, 3, 8, 5};

	printf("========================================\n");
	printf("                ft_memcmp               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Identical strings\n");

	s1 = "Hello 42!";
	s2 = "Hello 42!";

	std = memcmp(s1, s2, strlen(s1));
	ft = ft_memcmp(s1, s2, strlen(s1));

	printf("String 1     : %s\n", s1);
	printf("String 2     : %s\n", s2);
	printf("memcmp       : %d\n", std);
	printf("ft_memcmp    : %d\n", ft);

	if ((std == 0 && ft == 0)
		|| (std < 0 && ft < 0)
		|| (std > 0 && ft > 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Different strings\n");

	s1 = "Hello";
	s2 = "Hemlo";

	std = memcmp(s1, s2, strlen(s1));
	ft = ft_memcmp(s1, s2, strlen(s1));

	printf("String 1     : %s\n", s1);
	printf("String 2     : %s\n", s2);
	printf("memcmp       : %d\n", std);
	printf("ft_memcmp    : %d\n", ft);

	if ((std == 0 && ft == 0)
		|| (std < 0 && ft < 0)
		|| (std > 0 && ft > 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: n = 0\n");

	s1 = "Hello";
	s2 = "World";

	std = memcmp(s1, s2, 0);
	ft = ft_memcmp(s1, s2, 0);

	printf("memcmp       : %d\n", std);
	printf("ft_memcmp    : %d\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Compare first 3 bytes only\n");

	s1 = "Hello";
	s2 = "Helxx";

	std = memcmp(s1, s2, 3);
	ft = ft_memcmp(s1, s2, 3);

	printf("String 1     : %s\n", s1);
	printf("String 2     : %s\n", s2);
	printf("memcmp       : %d\n", std);
	printf("ft_memcmp    : %d\n", ft);

	if ((std == 0 && ft == 0)
		|| (std < 0 && ft < 0)
		|| (std > 0 && ft > 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Binary data\n");

	std = memcmp(a, b, sizeof(a));
	ft = ft_memcmp(a, b, sizeof(a));

	printf("memcmp       : %d\n", std);
	printf("ft_memcmp    : %d\n", ft);

	if ((std == 0 && ft == 0)
		|| (std < 0 && ft < 0)
		|| (std > 0 && ft > 0))
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 6
	printf("\nTest 6: Compare only first 3 bytes of binary data\n");

	std = memcmp(a, b, 3);
	ft = ft_memcmp(a, b, 3);

	printf("memcmp       : %d\n", std);
	printf("ft_memcmp    : %d\n", ft);

	if (std == ft)
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
//                ft_strnstr                //
// ======================================== //

static void	test_ft_strnstr(void)
{
	const char	*big;
	const char	*little;
	const char	*std;
	const char	*ft;

	printf("========================================\n");
	printf("               ft_strnstr               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Substring found\n");

	big = "Hello 42 Singapore!";
	little = "42";

	std = strnstr(big, little, strlen(big));
	ft = ft_strnstr(big, little, strlen(big));

	printf("Big string    : %s\n", big);
	printf("Little string : %s\n", little);
	printf("strnstr       : %s\n", std);
	printf("ft_strnstr    : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Substring not found\n");

	little = "Duck";

	std = strnstr(big, little, strlen(big));
	ft = ft_strnstr(big, little, strlen(big));

	printf("Big string    : %s\n", big);
	printf("Little string : %s\n", little);
	printf("strnstr       : %p\n", (void *)std);
	printf("ft_strnstr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Search length too small\n");

	little = "Singapore";

	std = strnstr(big, little, 10);
	ft = ft_strnstr(big, little, 10);

	printf("Big string    : %s\n", big);
	printf("Little string : %s\n", little);
	printf("Length        : 10\n");
	printf("strnstr       : %p\n", (void *)std);
	printf("ft_strnstr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Empty little string\n");

	little = "";

	std = strnstr(big, little, strlen(big));
	ft = ft_strnstr(big, little, strlen(big));

	printf("Big string    : %s\n", big);
	printf("Little string : \"%s\"\n", little);
	printf("strnstr       : %s\n", std);
	printf("ft_strnstr    : %s\n", ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Empty big string\n");

	big = "";
	little = "42";

	std = strnstr(big, little, 10);
	ft = ft_strnstr(big, little, 10);

	printf("Big string    : \"%s\"\n", big);
	printf("Little string : %s\n", little);
	printf("strnstr       : %p\n", (void *)std);
	printf("ft_strnstr    : %p\n", (void *)ft);

	if (std == ft)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 6
	printf("\nTest 6: Both strings empty\n");

	big = "";
	little = "";

	std = strnstr(big, little, 0);
	ft = ft_strnstr(big, little, 0);

	printf("Big string    : \"%s\"\n", big);
	printf("Little string : \"%s\"\n", little);
	printf("strnstr       : %s\n", std);
	printf("ft_strnstr    : %s\n", ft);

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

	if ((std == 0 && ft == 0)
		|| (std < 0 && ft < 0)
		|| (std > 0 && ft > 0))
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

	std_ret = strlcat(std, src, 8);
	ft_ret = ft_strlcat(ft, src, 8);

	printf("Destination  : 42\n");
	printf("Source       : %s\n", src);
	printf("Size         : 8\n");
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
	printf("\nTest 6: Destination size equals current length\n");

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

// Test 7
	printf("\nTest 7: Destination size smaller than current destination length\n");

	strcpy(std, "Hello");
	strcpy(ft, "Hello");
	src = "42";

	std_ret = strlcat(std, src, 3);
	ft_ret = ft_strlcat(ft, src, 3);

	printf("Destination  : Hello\n");
	printf("Source       : %s\n", src);
	printf("Size         : 3\n");
	printf("strlcat      : %s\n", std);
	printf("ft_strlcat   : %s\n", ft);
	printf("Return       : %zu | %zu\n", std_ret, ft_ret);

	if (strcmp(std, ft) == 0 && std_ret == ft_ret)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//                 ft_strdup                //
// ======================================== //

static void	test_ft_strdup(void)
{
	char	*std;
	char	*ft;
	const char	*src;

	printf("========================================\n");
	printf("               ft_strdup                \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal string\n");

	src = "Hello 42!";

	std = strdup(src);
	ft = ft_strdup(src);

	printf("Source       : %s\n", src);
	printf("strdup       : %s\n", std);
	printf("ft_strdup    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(std);
	free(ft);

	// Test 2
	printf("\nTest 2: Empty string\n");

	src = "";

	std = strdup(src);
	ft = ft_strdup(src);

	printf("Source       : \"%s\"\n", src);
	printf("strdup       : \"%s\"\n", std);
	printf("ft_strdup    : \"%s\"\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(std);
	free(ft);

	// Test 3
	printf("\nTest 3: Long string\n");

	src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";

	std = strdup(src);
	ft = ft_strdup(src);

	printf("strdup       : %s\n", std);
	printf("ft_strdup    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(std);
	free(ft);

	// Test 4
	printf("\nTest 4: Independent copy\n");

	src = "Hello";

	std = strdup(src);
	ft = ft_strdup(src);

	std[0] = 'Y';
	ft[0] = 'Y';

	printf("strdup       : %s\n", std);
	printf("ft_strdup    : %s\n", ft);

	if (strcmp(std, ft) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(std);
	free(ft);
}

// ======================================== //
//                 ft_calloc                //
// ======================================== //

static void	test_ft_calloc(void)
{
	int		*std;
	int		*ft;
	size_t	count;
	size_t	size;
	size_t	i;
	int		pass;

	printf("========================================\n");
	printf("               ft_calloc                \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Allocate 5 integers\n");

	std = calloc(5, sizeof(int));
	ft = ft_calloc(5, sizeof(int));

	pass = 1;
	i = 0;
	while (i < 5)
	{
		printf("[%zu] calloc = %d | ft_calloc = %d\n",
			i, std[i], ft[i]);
		if (std[i] != ft[i])
			pass = 0;
		i++;
	}

	if (pass)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(std);
	free(ft);

	// Test 2
	printf("\nTest 2: Allocate 1 integer\n");

	std = calloc(1, sizeof(int));
	ft = ft_calloc(1, sizeof(int));

	printf("calloc      : %d\n", std[0]);
	printf("ft_calloc   : %d\n", ft[0]);

	if (std[0] == ft[0])
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(std);
	free(ft);

	// Test 3
	printf("\nTest 3: count = 0\n");

	count = 0;

	std = calloc(count, sizeof(int));
	ft = ft_calloc(count, sizeof(int));

	printf("calloc      : %p\n", (void *)std);
	printf("ft_calloc   : %p\n", (void *)ft);

	printf("PASS ✅ (Pointers safely freed)\n");

	free(std);
	free(ft);

	// Test 4
	printf("\nTest 4: size = 0\n");

	size = 0;

	std = calloc(5, size);
	ft = ft_calloc(5, size);

	printf("calloc      : %p\n", (void *)std);
	printf("ft_calloc   : %p\n", (void *)ft);

	printf("PASS ✅ (Pointers safely freed)\n");

	free(std);
	free(ft);
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

// ======================================== //
//                ft_substr                 //
// ======================================== //

static void	test_ft_substr(void)
{
	char	*result;

	printf("========================================\n");
	printf("               ft_substr                \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal substring\n");

	result = ft_substr("Hello 42!", 6, 2);

	printf("Input        : \"Hello 42!\"\n");
	printf("Start        : 6\n");
	printf("Length       : 2\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "42") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 2
	printf("\nTest 2: Length longer than remaining string\n");

	result = ft_substr("Hello", 3, 10);

	printf("Input        : \"Hello\"\n");
	printf("Start        : 3\n");
	printf("Length       : 10\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "lo") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 3
	printf("\nTest 3: Start beyond end of string\n");

	result = ft_substr("Hello", 20, 5);

	printf("Input        : \"Hello\"\n");
	printf("Start        : 20\n");
	printf("Length       : 5\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 4
	printf("\nTest 4: Length = 0\n");

	result = ft_substr("Hello", 2, 0);

	printf("Input        : \"Hello\"\n");
	printf("Start        : 2\n");
	printf("Length       : 0\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 5
	printf("\nTest 5: Empty string\n");

	result = ft_substr("", 0, 5);

	printf("Input        : \"\"\n");
	printf("Start        : 0\n");
	printf("Length       : 5\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 6
	printf("\nTest 6: Copy entire string\n");

	result = ft_substr("42 Singapore", 0, 50);

	printf("Input        : \"42 Singapore\"\n");
	printf("Start        : 0\n");
	printf("Length       : 50\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "42 Singapore") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);
}

// ======================================== //
//                ft_strjoin                //
// ======================================== //

static void	test_ft_strjoin(void)
{
	char	*result;

	printf("========================================\n");
	printf("               ft_strjoin               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal strings\n");

	result = ft_strjoin("Hello ", "42!");

	printf("String 1     : \"Hello \"\n");
	printf("String 2     : \"42!\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Hello 42!") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 2
	printf("\nTest 2: First string empty\n");

	result = ft_strjoin("", "Singapore");

	printf("String 1     : \"\"\n");
	printf("String 2     : \"Singapore\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Singapore") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 3
	printf("\nTest 3: Second string empty\n");

	result = ft_strjoin("Hello", "");

	printf("String 1     : \"Hello\"\n");
	printf("String 2     : \"\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Hello") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 4
	printf("\nTest 4: Both strings empty\n");

	result = ft_strjoin("", "");

	printf("String 1     : \"\"\n");
	printf("String 2     : \"\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 5
	printf("\nTest 5: Long strings\n");

	result = ft_strjoin("42 ", "Common Core");

	printf("String 1     : \"42 \"\n");
	printf("String 2     : \"Common Core\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "42 Common Core") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 6
	printf("\nTest 6: Spaces preserved\n");

	result = ft_strjoin("Hello", " World");

	printf("String 1     : \"Hello\"\n");
	printf("String 2     : \" World\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Hello World") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);
}

// ======================================== //
//                ft_strtrim                //
// ======================================== //

static void	test_ft_strtrim(void)
{
	char	*result;

	printf("========================================\n");
	printf("               ft_strtrim               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Trim spaces\n");

	result = ft_strtrim("   Hello 42!   ", " ");

	printf("Input        : \"   Hello 42!   \"\n");
	printf("Set          : \" \"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Hello 42!") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 2
	printf("\nTest 2: Trim multiple characters\n");

	result = ft_strtrim("***Hello***", "*");

	printf("Input        : \"***Hello***\"\n");
	printf("Set          : \"*\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Hello") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 3
	printf("\nTest 3: Nothing to trim\n");

	result = ft_strtrim("Hello", "*");

	printf("Input        : \"Hello\"\n");
	printf("Set          : \"*\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "Hello") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 4
	printf("\nTest 4: Entire string trimmed\n");

	result = ft_strtrim("*****", "*");

	printf("Input        : \"*****\"\n");
	printf("Set          : \"*\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 5
	printf("\nTest 5: Empty string\n");

	result = ft_strtrim("", "*");

	printf("Input        : \"\"\n");
	printf("Set          : \"*\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 6
	printf("\nTest 6: Characters only trimmed at ends\n");

	result = ft_strtrim("**He*llo**", "*");

	printf("Input        : \"**He*llo**\"\n");
	printf("Set          : \"*\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "He*llo") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);
}

// ======================================== //
//                 ft_split                 //
// ======================================== //

static void	print_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		printf("[%zu] \"%s\"\n", i, split[i]);
		i++;
	}
}

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	test_ft_split(void)
{
	char	**result;

	printf("========================================\n");
	printf("                ft_split                \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Normal sentence\n");

	result = ft_split("Hello 42 Singapore", ' ');

	print_split(result);

	if (strcmp(result[0], "Hello") == 0
		&& strcmp(result[1], "42") == 0
		&& strcmp(result[2], "Singapore") == 0
		&& result[3] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 2
	printf("\nTest 2: Consecutive delimiters\n");

	result = ft_split("Hello,,,42,,,Singapore", ',');

	print_split(result);

	if (strcmp(result[0], "Hello") == 0
		&& strcmp(result[1], "42") == 0
		&& strcmp(result[2], "Singapore") == 0
		&& result[3] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 3
	printf("\nTest 3: Leading delimiters\n");

	result = ft_split("   Hello 42", ' ');

	print_split(result);

	if (strcmp(result[0], "Hello") == 0
		&& strcmp(result[1], "42") == 0
		&& result[2] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 4
	printf("\nTest 4: Trailing delimiters\n");

	result = ft_split("Hello 42   ", ' ');

	print_split(result);

	if (strcmp(result[0], "Hello") == 0
		&& strcmp(result[1], "42") == 0
		&& result[2] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 5
	printf("\nTest 5: Only delimiters\n");

	result = ft_split(",,,,,,", ',');

	if (result[0] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 6
	printf("\nTest 6: Empty string\n");

	result = ft_split("", ' ');

	if (result[0] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 7
	printf("\nTest 7: No delimiter found\n");

	result = ft_split("Singapore", ',');

	print_split(result);

	if (strcmp(result[0], "Singapore") == 0
		&& result[1] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 8
	printf("\nTest 8: Single-character words\n");

	result = ft_split("a,b,c,d,e", ',');

	print_split(result);

	if (strcmp(result[0], "a") == 0
		&& strcmp(result[1], "b") == 0
		&& strcmp(result[2], "c") == 0
		&& strcmp(result[3], "d") == 0
		&& strcmp(result[4], "e") == 0
		&& result[5] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 9
	printf("\nTest 9: Delimiter is '\\0'\n");

	result = ft_split("Hello", '\0');

	print_split(result);

	if (strcmp(result[0], "Hello") == 0
		&& result[1] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);

	// Test 10
	printf("\nTest 10: One word surrounded by delimiters\n");

	result = ft_split("*****42*****", '*');

	print_split(result);

	if (strcmp(result[0], "42") == 0
		&& result[1] == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free_split(result);
}

// ======================================== //
//                 ft_itoa                  //
// ======================================== //

static void	test_ft_itoa(void)
{
	char	*result;

	printf("========================================\n");
	printf("                 ft_itoa                \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Positive number\n");

	result = ft_itoa(42);

	printf("Input        : 42\n");
	printf("Result       : %s\n", result);

	if (strcmp(result, "42") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 2
	printf("\nTest 2: Negative number\n");

	result = ft_itoa(-42);

	printf("Input        : -42\n");
	printf("Result       : %s\n", result);

	if (strcmp(result, "-42") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 3
	printf("\nTest 3: Zero\n");

	result = ft_itoa(0);

	printf("Input        : 0\n");
	printf("Result       : %s\n", result);

	if (strcmp(result, "0") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 4
	printf("\nTest 4: INT_MAX\n");

	result = ft_itoa(INT_MAX);

	printf("Input        : %d\n", INT_MAX);
	printf("Result       : %s\n", result);

	if (strcmp(result, "2147483647") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 5
	printf("\nTest 5: INT_MIN\n");

	result = ft_itoa(INT_MIN);

	printf("Input        : %d\n", INT_MIN);
	printf("Result       : %s\n", result);

	if (strcmp(result, "-2147483648") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 6
	printf("\nTest 6: Large positive number\n");

	result = ft_itoa(123456789);

	printf("Input        : 123456789\n");
	printf("Result       : %s\n", result);

	if (strcmp(result, "123456789") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 7
	printf("\nTest 7: Large negative number\n");

	result = ft_itoa(-987654321);

	printf("Input        : -987654321\n");
	printf("Result       : %s\n", result);

	if (strcmp(result, "-987654321") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);
}

// ======================================== //
//                ft_strmapi                //
// ======================================== //

static char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static char	add_index(unsigned int i, char c)
{
	return (c + i);
}

static void	test_ft_strmapi(void)
{
	char	*result;

	printf("========================================\n");
	printf("               ft_strmapi              \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Uppercase even indices\n");

	result = ft_strmapi("hello world", to_upper_even);

	printf("Input        : \"hello world\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "HeLlO WoRlD") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 2
	printf("\nTest 2: Empty string\n");

	result = ft_strmapi("", to_upper_even);

	printf("Input        : \"\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 3
	printf("\nTest 3: Identity function\n");

	result = ft_strmapi("42 Singapore!", add_index);

	printf("Input        : \"42 Singapore!\"\n");
	printf("Result       : \"%s\"\n", result);

	if (result != NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 4
	printf("\nTest 4: Single character\n");

	result = ft_strmapi("a", to_upper_even);

	printf("Input        : \"a\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "A") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 5
	printf("\nTest 5: Numbers unchanged\n");

	result = ft_strmapi("123456", to_upper_even);

	printf("Input        : \"123456\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "123456") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);

	// Test 6
	printf("\nTest 6: Mixed characters\n");

	result = ft_strmapi("abc123xyz", to_upper_even);

	printf("Input        : \"abc123xyz\"\n");
	printf("Result       : \"%s\"\n", result);

	if (strcmp(result, "AbC123XyZ") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(result);
}

// ======================================== //
//               ft_striteri                //
// ======================================== //

static void	iter_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	iter_add_index(unsigned int i, char *c)
{
	*c += i;
}

static void	test_ft_striteri(void)
{
	char	str1[20];
	char	str2[20];
	char	str3[20];
	char	str4[20];
	char	str5[20];
	char	str6[20];

	printf("========================================\n");
	printf("              ft_striteri               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Uppercase even indices\n");

	strcpy(str1, "hello world");
	ft_striteri(str1, iter_upper_even);

	printf("Input        : \"hello world\"\n");
	printf("Result       : \"%s\"\n", str1);

	if (strcmp(str1, "HeLlO WoRlD") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: Empty string\n");

	strcpy(str2, "");
	ft_striteri(str2, iter_upper_even);

	printf("Input        : \"\"\n");
	printf("Result       : \"%s\"\n", str2);

	if (strcmp(str2, "") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Single character\n");

	strcpy(str3, "a");
	ft_striteri(str3, iter_upper_even);

	printf("Input        : \"a\"\n");
	printf("Result       : \"%s\"\n", str3);

	if (strcmp(str3, "A") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: Numbers unchanged\n");

	strcpy(str4, "123456");
	ft_striteri(str4, iter_upper_even);

	printf("Input        : \"123456\"\n");
	printf("Result       : \"%s\"\n", str4);

	if (strcmp(str4, "123456") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 5
	printf("\nTest 5: Mixed characters\n");

	strcpy(str5, "abc123xyz");
	ft_striteri(str5, iter_upper_even);

	printf("Input        : \"abc123xyz\"\n");
	printf("Result       : \"%s\"\n", str5);

	if (strcmp(str5, "AbC123XyZ") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 6
	printf("\nTest 6: Function uses index\n");

	strcpy(str6, "ABCDE");
	ft_striteri(str6, iter_add_index);

	printf("Input        : \"ABCDE\"\n");
	printf("Result       : \"%s\"\n", str6);

	if (strcmp(str6, "ACEGI") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");
}

// ======================================== //
//              ft_putchar_fd               //
// ======================================== //

static void	test_ft_putchar_fd(void)
{
	int		fd;
	char	buffer[2];

	printf("========================================\n");
	printf("             ft_putchar_fd              \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Print to stdout\n");

	printf("Expected     : A\n");
	printf("Result       : ");
	ft_putchar_fd('A', 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 2
	printf("\nTest 2: Print digit\n");

	printf("Expected     : 4\n");
	printf("Result       : ");
	ft_putchar_fd('4', 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 3
	printf("\nTest 3: Print newline\n");

	printf("Expected     : New line below\n");
	ft_putchar_fd('\n', 1);
	printf("PASS ✅ (visual check)\n");

	// Test 4
	printf("\nTest 4: Write to file\n");

	fd = open("putchar_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd < 0)
	{
		printf("FAIL ❌ (cannot open file)\n");
		return ;
	}

	ft_putchar_fd('Z', fd);
	close(fd);

	fd = open("putchar_test.txt", O_RDONLY);
	read(fd, buffer, 1);
	buffer[1] = '\0';
	close(fd);

	printf("Expected     : Z\n");
	printf("Result       : %s\n", buffer);

	if (strcmp(buffer, "Z") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	remove("putchar_test.txt");
}

// ======================================== //
//               ft_putstr_fd               //
// ======================================== //

static void	test_ft_putstr_fd(void)
{
	int		fd;
	char	buffer[50];

	printf("========================================\n");
	printf("              ft_putstr_fd              \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Print to stdout\n");

	printf("Expected     : Hello 42!\n");
	printf("Result       : ");
	ft_putstr_fd("Hello 42!", 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 2
	printf("\nTest 2: Empty string\n");

	printf("Expected     : (nothing)\n");
	printf("Result       : ");
	ft_putstr_fd("", 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 3
	printf("\nTest 3: NULL string\n");

	printf("Expected     : No output\n");
	printf("Result       : ");
	ft_putstr_fd(NULL, 1);
	printf("\nPASS ✅ (should not crash)\n");

	// Test 4
	printf("\nTest 4: Write to file\n");

	fd = open("putstr_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd < 0)
	{
		printf("FAIL ❌ (cannot open file)\n");
		return ;
	}

	ft_putstr_fd("42 Singapore", fd);
	close(fd);

	fd = open("putstr_test.txt", O_RDONLY);
	read(fd, buffer, sizeof(buffer) - 1);
	buffer[12] = '\0';
	close(fd);

	printf("Expected     : 42 Singapore\n");
	printf("Result       : %s\n", buffer);

	if (strcmp(buffer, "42 Singapore") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	remove("putstr_test.txt");

	// Test 5
	printf("\nTest 5: Special characters\n");

	printf("Expected     : Hello\t42!\n");
	printf("Result       : ");
	ft_putstr_fd("Hello\t42!", 1);
	printf("\nPASS ✅ (visual check)\n");
}

// ======================================== //
//              ft_putendl_fd               //
// ======================================== //

static void	test_ft_putendl_fd(void)
{
	int		fd;
	char	buffer[50];
	int		bytes;

	printf("========================================\n");
	printf("             ft_putendl_fd              \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Print to stdout\n");

	printf("Expected     : Hello 42!\\n\n");
	printf("Result       :\n");
	ft_putendl_fd("Hello 42!", 1);
	printf("PASS ✅ (visual check)\n");

	// Test 2
	printf("\nTest 2: Empty string\n");

	printf("Expected     : Blank line\n");
	printf("Result       :\n");
	ft_putendl_fd("", 1);
	printf("PASS ✅ (visual check)\n");

	// Test 3
	printf("\nTest 3: NULL string\n");

	printf("Expected     : No output\n");
	printf("Result       : ");
	ft_putendl_fd(NULL, 1);
	printf("\nPASS ✅ (should not crash)\n");

	// Test 4
	printf("\nTest 4: Write to file\n");

	fd = open("putendl_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd < 0)
	{
		printf("FAIL ❌ (cannot open file)\n");
		return ;
	}

	ft_putendl_fd("42 Singapore", fd);
	close(fd);

	fd = open("putendl_test.txt", O_RDONLY);
	bytes = read(fd, buffer, sizeof(buffer) - 1);
	buffer[bytes] = '\0';
	close(fd);

	printf("Expected     : 42 Singapore\\n\n");
	printf("Result       : %s", buffer);

	if (strcmp(buffer, "42 Singapore\n") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	remove("putendl_test.txt");

	// Test 5
	printf("\nTest 5: Special characters\n");

	printf("Expected     : Hello\t42!\\n\n");
	printf("Result       :\n");
	ft_putendl_fd("Hello\t42!", 1);
	printf("PASS ✅ (visual check)\n");
}

// ======================================== //
//              ft_putnbr_fd                //
// ======================================== //

static void	test_ft_putnbr_fd(void)
{
	int		fd;
	char	buffer[50];
	int		bytes;

	printf("========================================\n");
	printf("             ft_putnbr_fd               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Positive number\n");

	printf("Expected     : 42\n");
	printf("Result       : ");
	ft_putnbr_fd(42, 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 2
	printf("\nTest 2: Negative number\n");

	printf("Expected     : -42\n");
	printf("Result       : ");
	ft_putnbr_fd(-42, 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 3
	printf("\nTest 3: Zero\n");

	printf("Expected     : 0\n");
	printf("Result       : ");
	ft_putnbr_fd(0, 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 4
	printf("\nTest 4: INT_MAX\n");

	printf("Expected     : 2147483647\n");
	printf("Result       : ");
	ft_putnbr_fd(2147483647, 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 5
	printf("\nTest 5: INT_MIN\n");

	printf("Expected     : -2147483648\n");
	printf("Result       : ");
	ft_putnbr_fd(-2147483648, 1);
	printf("\nPASS ✅ (visual check)\n");

	// Test 6
	printf("\nTest 6: Write to file\n");

	fd = open("putnbr_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd < 0)
	{
		printf("FAIL ❌ (cannot open file)\n");
		return ;
	}

	ft_putnbr_fd(123456, fd);
	close(fd);

	fd = open("putnbr_test.txt", O_RDONLY);
	bytes = read(fd, buffer, sizeof(buffer) - 1);
	buffer[bytes] = '\0';
	close(fd);

	printf("Expected     : 123456\n");
	printf("Result       : %s\n", buffer);

	if (strcmp(buffer, "123456") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	remove("putnbr_test.txt");
}

// ======================================== //
//                ft_lstnew                 //
// ======================================== //

static void	test_ft_lstnew(void)
{
	t_list	*node;
	char	*str;
	int		num;

	printf("========================================\n");
	printf("               ft_lstnew                \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: String content\n");

	str = "Hello 42!";
	node = ft_lstnew(str);

	printf("Expected     : Hello 42!\n");
	printf("Result       : %s\n", (char *)node->content);

	if (strcmp((char *)node->content, str) == 0
		&& node->next == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(node);

	// Test 2
	printf("\nTest 2: Integer content\n");

	num = 42;
	node = ft_lstnew(&num);

	printf("Expected     : 42\n");
	printf("Result       : %d\n", *(int *)node->content);

	if (*(int *)node->content == 42
		&& node->next == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(node);

	// Test 3
	printf("\nTest 3: NULL content\n");

	node = ft_lstnew(NULL);

	printf("Expected     : NULL\n");
	printf("Result       : %p\n", node->content);

	if (node->content == NULL
		&& node->next == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(node);

	// Test 4
	printf("\nTest 4: next pointer\n");

	node = ft_lstnew("42");

	printf("Expected     : NULL\n");
	printf("Result       : %p\n", (void *)node->next);

	if (node->next == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(node);
}

// ======================================== //
//              ft_lstadd_front             //
// ======================================== //

static void	test_ft_lstadd_front(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*node2;

	printf("========================================\n");
	printf("            ft_lstadd_front             \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Add to empty list\n");

	head = NULL;
	new = ft_lstnew("First");

	ft_lstadd_front(&head, new);

	printf("Expected     : First\n");
	printf("Result       : %s\n", (char *)head->content);

	if (head == new && strcmp(head->content, "First") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head);

	// Test 2
	printf("\nTest 2: Add to front of existing list\n");

	head = ft_lstnew("Second");
	new = ft_lstnew("First");

	ft_lstadd_front(&head, new);

	printf("Expected     : First -> Second\n");
	printf("Result       : %s -> %s\n",
		(char *)head->content,
		(char *)head->next->content);

	if (strcmp(head->content, "First") == 0
		&& strcmp(head->next->content, "Second") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next);
	free(head);

	// Test 3
	printf("\nTest 3: Add multiple nodes to front\n");

	head = ft_lstnew("Three");

	node2 = ft_lstnew("Two");
	ft_lstadd_front(&head, node2);

	new = ft_lstnew("One");
	ft_lstadd_front(&head, new);

	printf("Expected     : One -> Two -> Three\n");
	printf("Result       : %s -> %s -> %s\n",
		(char *)head->content,
		(char *)head->next->content,
		(char *)head->next->next->content);

	if (strcmp(head->content, "One") == 0
		&& strcmp(head->next->content, "Two") == 0
		&& strcmp(head->next->next->content, "Three") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next->next);
	free(head->next);
	free(head);

	// Test 4
	printf("\nTest 4: NULL new node\n");

	head = ft_lstnew("Hello");

	ft_lstadd_front(&head, NULL);

	printf("Expected     : Hello\n");
	printf("Result       : %s\n", (char *)head->content);

	if (strcmp(head->content, "Hello") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head);

	// Test 5
	printf("\nTest 5: NULL list pointer\n");

	new = ft_lstnew("Hello");

	ft_lstadd_front(NULL, new);

	printf("Expected     : No crash\n");
	printf("Result       : Function returned safely\n");
	printf("PASS ✅\n");

	free(new);
}

// ======================================== //
//               ft_lstsize                 //
// ======================================== //

static void	test_ft_lstsize(void)
{
	t_list	*head;
	t_list	*node;

	printf("========================================\n");
	printf("               ft_lstsize               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Empty list\n");

	head = NULL;

	printf("Expected     : 0\n");
	printf("Result       : %d\n", ft_lstsize(head));

	if (ft_lstsize(head) == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: One node\n");

	head = ft_lstnew("42");

	printf("Expected     : 1\n");
	printf("Result       : %d\n", ft_lstsize(head));

	if (ft_lstsize(head) == 1)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head);

	// Test 3
	printf("\nTest 3: Three nodes\n");

	head = ft_lstnew("One");
	node = ft_lstnew("Two");
	head->next = node;
	node->next = ft_lstnew("Three");

	printf("Expected     : 3\n");
	printf("Result       : %d\n", ft_lstsize(head));

	if (ft_lstsize(head) == 3)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next->next);
	free(head->next);
	free(head);

	// Test 4
	printf("\nTest 4: Five nodes\n");

	head = ft_lstnew("1");
	head->next = ft_lstnew("2");
	head->next->next = ft_lstnew("3");
	head->next->next->next = ft_lstnew("4");
	head->next->next->next->next = ft_lstnew("5");

	printf("Expected     : 5\n");
	printf("Result       : %d\n", ft_lstsize(head));

	if (ft_lstsize(head) == 5)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next->next->next->next);
	free(head->next->next->next);
	free(head->next->next);
	free(head->next);
	free(head);
}

// ======================================== //
//               ft_lstlast                 //
// ======================================== //

static void	test_ft_lstlast(void)
{
	t_list	*head;
	t_list	*last;

	printf("========================================\n");
	printf("               ft_lstlast               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Empty list\n");

	head = NULL;
	last = ft_lstlast(head);

	printf("Expected     : NULL\n");
	printf("Result       : %p\n", (void *)last);

	if (last == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: One node\n");

	head = ft_lstnew("42");
	last = ft_lstlast(head);

	printf("Expected     : 42\n");
	printf("Result       : %s\n", (char *)last->content);

	if (strcmp(last->content, "42") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head);

	// Test 3
	printf("\nTest 3: Three nodes\n");

	head = ft_lstnew("One");
	head->next = ft_lstnew("Two");
	head->next->next = ft_lstnew("Three");

	last = ft_lstlast(head);

	printf("Expected     : Three\n");
	printf("Result       : %s\n", (char *)last->content);

	if (strcmp(last->content, "Three") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next->next);
	free(head->next);
	free(head);

	// Test 4
	printf("\nTest 4: Five nodes\n");

	head = ft_lstnew("1");
	head->next = ft_lstnew("2");
	head->next->next = ft_lstnew("3");
	head->next->next->next = ft_lstnew("4");
	head->next->next->next->next = ft_lstnew("5");

	last = ft_lstlast(head);

	printf("Expected     : 5\n");
	printf("Result       : %s\n", (char *)last->content);

	if (strcmp(last->content, "5") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next->next->next->next);
	free(head->next->next->next);
	free(head->next->next);
	free(head->next);
	free(head);
}

// ======================================== //
//             ft_lstadd_back               //
// ======================================== //

static void	test_ft_lstadd_back(void)
{
	t_list	*head;
	t_list	*new;

	printf("========================================\n");
	printf("             ft_lstadd_back             \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Add to empty list\n");

	head = NULL;
	new = ft_lstnew("First");

	ft_lstadd_back(&head, new);

	printf("Expected     : First\n");
	printf("Result       : %s\n", (char *)head->content);

	if (head == new && strcmp(head->content, "First") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head);

	// Test 2
	printf("\nTest 2: Add to back of one-node list\n");

	head = ft_lstnew("First");
	new = ft_lstnew("Second");

	ft_lstadd_back(&head, new);

	printf("Expected     : First -> Second\n");
	printf("Result       : %s -> %s\n",
		(char *)head->content,
		(char *)head->next->content);

	if (strcmp(head->content, "First") == 0
		&& strcmp(head->next->content, "Second") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next);
	free(head);

	// Test 3
	printf("\nTest 3: Add to three-node list\n");

	head = ft_lstnew("One");
	head->next = ft_lstnew("Two");
	head->next->next = ft_lstnew("Three");

	new = ft_lstnew("Four");

	ft_lstadd_back(&head, new);

	printf("Expected     : Four is last node\n");
	printf("Result       : %s\n",
		(char *)ft_lstlast(head)->content);

	if (strcmp(ft_lstlast(head)->content, "Four") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head->next->next->next);
	free(head->next->next);
	free(head->next);
	free(head);

	// Test 4
	printf("\nTest 4: NULL new node\n");

	head = ft_lstnew("Hello");

	ft_lstadd_back(&head, NULL);

	printf("Expected     : Hello\n");
	printf("Result       : %s\n", (char *)head->content);

	if (strcmp(head->content, "Hello") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	free(head);

	// Test 5
	printf("\nTest 5: NULL list pointer\n");

	new = ft_lstnew("Hello");

	ft_lstadd_back(NULL, new);

	printf("Expected     : No crash\n");
	printf("Result       : Function returned safely\n");
	printf("PASS ✅\n");

	free(new);
}

// ======================================== //
//              ft_lstdelone                //
// ======================================== //

static void	del_content(void *content)
{
	free(content);
}

static void	test_ft_lstdelone(void)
{
	t_list	*node;
	char	*str;

	printf("========================================\n");
	printf("             ft_lstdelone               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Delete one node\n");

	str = ft_strdup("Hello");
	node = ft_lstnew(str);

	printf("Content before: %s\n", (char *)node->content);

	ft_lstdelone(node, del_content);

	printf("PASS ✅ (No crash)\n");

	// Test 2
	printf("\nTest 2: NULL node\n");

	ft_lstdelone(NULL, del_content);

	printf("PASS ✅ (No crash)\n");

	// Test 3
	printf("\nTest 3: NULL del function\n");

	str = ft_strdup("42");
	node = ft_lstnew(str);

	ft_lstdelone(node, NULL);

	printf("PASS ✅ (Node intentionally not deleted)\n");

	/* Clean up manually */
	free(str);
	free(node);
}

// ======================================== //
//               ft_lstclear                //
// ======================================== //

static void	test_ft_lstclear(void)
{
	t_list	*head;

	printf("========================================\n");
	printf("              ft_lstclear               \n");
	printf("========================================\n");

	// Test 1
	printf("\nTest 1: Empty list\n");

	head = NULL;
	ft_lstclear(&head, del_content);

	printf("Expected     : NULL\n");
	printf("Result       : %p\n", (void *)head);

	if (head == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 2
	printf("\nTest 2: One node\n");

	head = ft_lstnew(ft_strdup("Hello"));

	ft_lstclear(&head, del_content);

	printf("Expected     : NULL\n");
	printf("Result       : %p\n", (void *)head);

	if (head == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 3
	printf("\nTest 3: Multiple nodes\n");

	head = ft_lstnew(ft_strdup("One"));
	head->next = ft_lstnew(ft_strdup("Two"));
	head->next->next = ft_lstnew(ft_strdup("Three"));

	ft_lstclear(&head, del_content);

	printf("Expected     : NULL\n");
	printf("Result       : %p\n", (void *)head);

	if (head == NULL)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	// Test 4
	printf("\nTest 4: NULL list pointer\n");

	ft_lstclear(NULL, del_content);

	printf("Expected     : No crash\n");
	printf("PASS ✅\n");

	// Test 5
	printf("\nTest 5: NULL del function\n");

	head = ft_lstnew(ft_strdup("42"));

	ft_lstclear(&head, NULL);

	printf("Expected     : List unchanged\n");
	printf("Result       : %s\n", (char *)head->content);

	if (head != NULL && strcmp(head->content, "42") == 0)
		printf("PASS ✅\n");
	else
		printf("FAIL ❌\n");

	/* Manual cleanup */
	free(head->content);
	free(head);
}
