
#include "libft.h"
#include <ctype.h>
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
	//---------------- is ----------------------
	printf("--------------------- is ---------------------\n"); 
	printf("ft_isalpha: A:%d | Z:%d | a:%d | z:%d | error: 1:%d \n", ft_isalpha('A'), ft_isalpha('Z'), ft_isalpha('a'), ft_isalpha('z'), ft_isalpha('1'));
	printf("isalpha: A:%d | Z:%d | a:%d | z:%d | error: 1:%d \n\n", isalpha('A'), isalpha('Z'), isalpha('a'), isalpha('z'), isalpha('1'));

	printf("ft_isdigit: 0:%d | 9:%d | error: A:%d | a:%d  \n", ft_isdigit('0'), ft_isdigit('9'), ft_isdigit('A'), ft_isdigit('a'));
	printf("isdigit: 0:%d | 9:%d | error: A:%d | a:%d  \n\n", isdigit('0'), isdigit('9'), isdigit('A'), isdigit('a'));
	
	printf("ft_isalnum: A:%d | Z:%d | a:%d | z:%d | 0:%d | 9:%d | error: +:%d \n", ft_isalnum('A'), ft_isalnum('Z'), ft_isalnum('a'), ft_isalnum('z'), ft_isalnum('0'), ft_isalnum('9'), ft_isalnum('+'));
	printf("isalnum: A:%d | Z:%d | a:%d | z:%d | 0:%d | 9:%d | error: +:%d \n\n", isalnum('A'), isalnum('Z'), isalnum('a'), isalnum('z'), isalnum('0'), isalnum('9'), isalnum('+'));
	
	// p[0..127] = posicao na tabela ascii
	printf("ft_isascii: P0:%d | P127:%d | error: P128:%d \n", ft_isascii(0), ft_isascii(127), ft_isascii(128));
	printf("isascii: P0:%d | P127:%d | error: P128:%d \n\n", isascii(0), isascii(127), isascii(128));
	
	printf("ft_isprint: P32:%d | P126:%d | error: P31:%d | P127:%d \n", ft_isprint(32), ft_isprint(126), ft_isprint(31), ft_isprint(127));
	printf("isprint: P32:%d | P126:%d | error: P31:%d | P127:%d \n", isprint(32), isprint(126), isprint(31), isprint(127));
	printf("---------------------------------------------\n\n");

	//---------------- str ----------------------
	printf("--------------------- str ---------------------\n");
	printf("ft_strlen: teste:%zu | teste1:%zu \n", ft_strlen("teste"), ft_strlen("teste1"));	
	printf("strlen: teste:%zu | teste1:%zu \n\n", strlen("teste"), strlen("teste1"));
	
	char a[] = "ola";
	char b[] = "olaaa";
	size_t s = 5;
	printf("ft_strlcpy: %zu\n\n", ft_strlcpy(b, a, s));
	//printf("strlcpy: %zu ", strlcpy(b, a, s));
		
	printf("ft_strlcat: %zu\n\n", ft_strlcat(b, a, s));
	//printf("strlcat: %zu", strlcat(b, a, s));

	
	printf("-----------------------------------------------\n\n"); 
	

}
