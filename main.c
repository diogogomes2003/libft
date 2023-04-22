#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>
#include "libft.h"

int main (void)
{
    printf("<ctype.h> library\n\n");
    printf("ft_isalpha : %i\n", ft_isalpha(83));
    printf("isalpha : %i\n\n",isalpha(83));

    printf("ft_isdigit : %i\n", ft_isdigit(51));
    printf("isdigit : %i\n\n", isdigit(51));

    printf("ft_isalnum : %i\n", ft_isalnum(83));
    printf("isalnum : %i\n\n", isalnum(83));

    printf("ft_isascii : %i\n", ft_isascii(83));
    printf("isascii : %i\n\n", isascii(83));

    printf("ft_isprint : %i\n", ft_isprint(83));
    printf("isprint : %i\n\n", isprint(83));

    printf("ft_toupper : %i\n", ft_toupper(115));
    printf("toupper : %i\n\n", toupper(115));

    printf("ft_tolower : %i\n", ft_tolower(83));
    printf("tolower : %i\n\n", tolower(83));

}
