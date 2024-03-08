// functions.c
//
// Written by Natalie
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int add(int val1, int val2);

int main() {
    int result = 0;
    int num1 = 5;
    int num2 = 3;
    int num3 = 9;


    result = add(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// add two numbers together
int add(int val1, int val2) {
    int result = val1 + val2;
    return result;
}