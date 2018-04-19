#include <stdio.h>

int runyear (int m, int d) {
	int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < m; ++i)
    {
    	d += a[i];
    }
    int leapyear (int y) {
	int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		a[2]++;
	}
}

    return d;
}

int main()
{
	int y, m, d;
	scanf("%d, %d, %d", &y, &m, &d);
	printf("%d\n", runyear(y, m, d));
	return 0;
}
