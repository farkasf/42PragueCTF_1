#include <stdio.h>
#include <string.h>

int main()
{
	char flag3[] = "myst3ry}";
	int i = 0;
	char c = 'a';
	char	dst[] = "Hello";
	char	src[] = "World!";

	char	x[] = ".includes";
	char	y[] = "_DYNAMIC2";

	char flag1[] = "42{b1n4r135_";
	while (i < 10000)
	{
		if (i % 2 == 0)
			strncpy(dst, src, 2);
		else
			strncpy(src, dst, 2);
		i++;
	}
	while (i < 20000)
	{
		if (i % 2 == 0)
		{
			c = dst[0];
			dst[0] = src[0];
			src[0] = c;
		}
		else
		{
			c = src[0];
			src[0] = dst[0];
			dst[0] = c;
		}
		i++;
	}

	char	z[] = "_TEXT";
	char flag2[] = "4r3_4_";
	
	puts("not you again");
}