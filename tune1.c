#include <stdio.h>

void main()
{
	int i;

	for (i = 0; ; i++)
		putchar(
			(i * 5 & i >> 7) | (i * 3 & i >> 10)
		       );
}
