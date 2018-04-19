#include <stdio.h>
#include <math.h>

int main() {
	// int a, b, c;
 //    a = 1;
 //    b = 0;
 //    c = 0;
   
    for (int a = 1; a <= 9; ++a)
    {
        for (int b = 0; b <= 9; ++b)
        {
            for (int c = 0; c <= 9; ++c)
            {
                if (100*a + 10*b + c == pow(a, 3) + pow(b, 3) + pow(c, 3))
                {
                    printf("%d\n", 100*a + 10*b + c);
                }
            }
        }
    }
    return 0;
}
