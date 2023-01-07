
#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
    char src[] = "youssef";
	char dest[5] = "";

	printf("%s", ft_strncpy(dest, src, 3));
	//printf("\n%s", strncpy(dest, src, 10));
    //src[i] =='\0'
	
}