// largest
//
// Written by YOUR-NAME (YOUR-ZID)
// on TODAYS-DATE
//
// This program adds 1 to any odd element in an array and after prints
// all elements in the array

#include <stdio.h>

#define SIZE 8

int main(void) {
    char letters[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    char largest_character = letters[0];
    // alternative
    // int i = 0;
    // while (i < SIZE) {
    //     scanf("%c", &letters[i]);
    //     i++;
    // }

    int j = 0;
    while (j < SIZE) {
        if (letters[j] > largest_character) {
            largest_character = letters[j];
        }
        j++;
    }

    printf("%c", largest_character);

    return 0;
}