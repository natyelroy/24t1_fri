// while_loops.c
//
// Written by Name zID
// on February 2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    printf("Start of loop\n");

    int x = 0;
    while (x < 10) {
        printf("%d", x);
        x++;
    }

    printf("End of loop\n");
    return 0;
}