#include <stdio.h>
int main() {
    int y;
    printf("please enter the year number: ");
    scanf("%d", &y);
    if(y % 4 == 0){
        puts("It's a Leap Year");
    }
    else if(y % 400 == 0){
        puts("It's a leap year and a 0.1 millennium");
    }
    else{
        puts("It's a normal year");
    }
    return 0;
}

