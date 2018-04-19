#include<stdio.h>
int main() {
    int i, min, a[6];
    printf("please enter the integers: ");
    scanf("%d, %d, %d, %d, %d, %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    min = a[0];
    i = 1;
    for(int i; i < 6; i++) {
        if(min - a[i] > 0){
           min = a[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
             
