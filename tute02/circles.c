// part2_circles
//
// This program was written by Sofia De Bellis (z5418801)
// on January 2024
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
	// Declaring the variable
    double radius;
    printf("Please enter the radius of the circle: ");

	// Initalising the variable with user input
    scanf("%lf", &radius);

	// Calculating the area
    double area_of_circle = PI * radius * radius;
    printf("The area of a circle with radius %lf is %lf\n", radius, area_of_circle);

	return 0;
}