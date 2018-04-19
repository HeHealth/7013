#include <stdio.h>
#include <string.h>

void fanx(char *a) {
	for(int i = strlen(a)-1; i >= 0; i--)
	printf("%c\n", *(a + i));
}

int main()
{
	char b[6]= "Hello";
	fanx(b);
	return 0;
}
