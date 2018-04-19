#include <stdio.h>

int main(void)
{
	int d;
	char c;
	scanf("%c%d", &c, &d);
	for (int a = 0; a < d; ++a)
	{
		for (int b = 0; b < (d - a - 1); ++b)
		{
			printf(" ");
		}
		for (int b = 0; b < (2 * a + 1); ++b)
		{
			printf("%c ", c);
		}
		printf("\n\n");
	}
	return 0;
}
