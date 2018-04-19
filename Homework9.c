#include <stdio.h>
#include <math.h>

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
    	fact = fact * i;
    }
    return fact;
}

int main() {
	int result = 0;
	for (int n = 1; n <= 10; n++)
	{
		result += pow(0.5, n) * fact(n);	
	}
	printf("%d\n", result);
	return 0;
}
