#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LENGTH 16  //LENGTH is now a constant with value 16

int main(int argc, char* argv[]) {

    // Confirm that a command-line argument is present
    if (argc == 1) {
        printf("Usage: hw0 XX.###.###Gg#.#\n");
        return 1;  // exit program because no command line argument present
    }

    // Declare a char array to hold the command-line argument string; 
    // ensure last char is null character
    char Course[LENGTH];
    strncpy(Course, argv[1], LENGTH);
    Course[LENGTH-1] = '\0';

    // TO DO: eventually remove the line below; it's just for debugging purposes 
    printf("Course string collected: %s\n", Course);

    // TO DO: add your code here

    if(Course[0] == 'M' && Course[1] == 'E') {
        puts("Division: 0");
    }
    else if(Course[0] == 'B' && Course[1] == 'U') {
        puts("Division: 1");
    }        
    else if(Course[0] == 'E' && Course[1] == 'D') {
        puts("Division: 2");
    }        
    else if(Course[0] == 'E' && Course[1] == 'N') {
        puts("Division: 3");
    }
    else if(Course[0] == 'A' && Course[1] == 'S') {
        puts("Division: 4");
    }
    else if(Course[0] == 'P' && Course[1] == 'H') {
        puts("Division: 5");
    }
    else if(Course[0] == 'P' && Course[1] == 'Y') {
        puts("Division: 6");
    }
    else if(Course[0] == 'S' && Course[1] == 'A') {
        puts("Division: 7");
    } 

    char O[4];
    O[0] = Course[3];
    O[1] = Course[4];
    O[2] = Course[5];

    char C[4];
    C[0] = Course[7];
    C[1] = Course[8];
    C[2] = Course[9];


    char letters = Course[10];
    int points;
    switch(letters) {
        case 'A':
            points = 0;
            break;  
        case 'B':
            points = 1;
            break;
        case 'C':
            points = 2;
            break; 
        case 'D':
            points = 3;
            break;
        case 'F':
            points = 4;
            break;
        case 'I':
            points = 5;
            break;
        case 'S':
            points = 6;
            break;
        case 'U':
            points = 7;
            break;
        default:
            break;
    }   

    char grade = Course[11];
    int number;
    switch(grade) {
        case '+':
            number = 0;
            break;
        case '/':
            number = 1;
            break;
        case '-':
            number = 2;
            break;
        default:
            break;
    }

    if(Course[12] == '0' && Course[14] == '0') {
        puts("Credits: 0.0");
    }
    else if(Course[12] == '0' && Course[14] == '5') {
        puts("Credits: 0.5");
    }
    else if(Course[12] == '1' && Course[14] == '0') {
        puts("Credits: 1.0");
    }
    else if(Course[12] == '1' && Course[14] == '5') {
        puts("Credits: 1.5");
    }
    else if(Course[12] == '2' && Course[14] == '0') {
        puts("Credits: 2.0");
    }
    else if(Course[12] == '2' && Course[14] == '5') {
        puts("Credits: 2.5");
    }
    else if(Course[12] == '3' && Course[14] == '0') {
        puts("Credits: 3.0");
    }
    else if(Course[12] == '3' && Course[14] == '5') {
        puts("Credits: 3.5");
    }
    else if(Course[12] == '4' && Course[14] == '0') {
        puts("Credits: 4.0");
    }
    else if(Course[12] == '4' && Course[14] == '5') {
        puts("Credits: 4.5");
    }
    else if(Course[12] == '5' && Course[14] == '0') {
        puts("Credits: 5.0");
    }
    else if(Course[12] == '5' && Course[14] == '5') {
        puts("Credits: 5.5");
    }

    char ch = Course[12];
    if (!isdigit(ch)) {
        puts("error");
        return 1;    
    } 
    int credit1 = ch-'0';




    if (credit1 < 0 || credit1 > 5) {
        puts("error");
        return 1;
    } 



    
    printf("Department: %d\n", atoi(O));
    printf("Course: %d\n", atoi(C));
    printf("Grade: %d, %d\n", points, number);
    return 0;
}
   

