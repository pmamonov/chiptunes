#include <stdio.h>

void main()
{
	int i;

	for (i = 0; ; i++)
		putchar(
			(i & i % 0xff) - (i * 3 & i >> 13 & i >> 6)
		       );
}
