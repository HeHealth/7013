#include<stdio.h>
int main() {
    int a[200], sum=0, mean=0;       
    for(int i = 0; i < 200; i++) {
        a[i] = i;
        sum += a[i];
        mean = sum/200;
    }
    printf("%d\n" , mean);
}
