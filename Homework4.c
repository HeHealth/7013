#include <stdio.h>

int main()
{
	int x;
	printf("please enter the integers: ");
	scanf("%d", &x);
	if ((x % 4) == 0 && (x % 100) != 0)
	{
		puts("It's the leap year");
	}
    else if ((x % 4) == 0 && (x % 400) == 0)
    {
    	puts("It's also the leap year");
    }
    else {
    	puts("It's not the leap year");
    }
	return 0;
}
