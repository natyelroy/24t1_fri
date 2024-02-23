// part1_variables
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int num;
    char name;
    double num2;

    // 2. Initalise the variables
    num = 3;
    name = 'j';
    num2 = 3.4;

    // 3. Print the variables
    printf("This is num: %d\n", num);
    printf("This is name: %c\n", name);
    printf("This is num2: %.2lf\n", num2);

    // 4. Reassign the values of some of the variables
    num = 6;

	// 5. Print the variables
    printf("This num is now: %d\n", num);

	return 0;
}