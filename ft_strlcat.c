#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char dst[50] = "Hello, ";
	const char *src = "world!";
	size_t size = 50;
	size_t result;

	result = ft_strlcat(dst, src, size);

	printf("Resulting string: '%s'\n", dst);
	printf("Total length: %zu\n", result);

	return 0;
}