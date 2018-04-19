#include <stdio.h>

int main(void) {
	char c;
	int space = 0;
	int tab = 0;
	int enter = 0;
	printf("please enter the strings:\n");

	while((c = getchar()) != EOF) {
		switch(c) {
			case 32:
			     space++;
			     break;
			case 9:
			     tab++;
			     break;
			case 10:
			     enter++;
			     break;
			default:
			     break;
		}
	}
	printf("The number of space is: %d\n", space);
	printf("The number of tab is: %d\n", tab);
	printf("The number of enter is: %d\n", enter);
	return 0;
}


