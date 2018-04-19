#include <stdio.h>

int main() {
    int n, num, i;
    int f1, f2;
    printf("enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("please enter the correct integer\n");
    }
    return 1;
    
    if (n == 1 || n == 2) {
        puts("num = 1");
    }
    num = 0;
    f1 = 1;
    f2 = 1;
    for (i = 3; i <= n; i++) {
        num = f1 + f2;
        f1 = f2;
        f2 = num;
        printf("%d\n", num);
    }
    return 0;
}
