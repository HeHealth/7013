#include <stdio.h>

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
    	fact = fact * i;
    }
    return fact;
}

int main(void)
{
    int n;
    scanf("%d", &n);
	printf("%d\n", fact(n));
	return 0;
}
