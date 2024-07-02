#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	while (dst[dst_len] && dst_len < size)
		{
			dst_len++;
		}
	if (dst_len == size)
	{
		return (size + src_len);
	}
	j = dst_len;
	while (src[i] && (j + 1) < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (j < size)
	{
		dst[j] = '\0';
	}
	return (dst_len + src_len);
}
/*
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
*/
