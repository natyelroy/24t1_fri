// part2_2d_while_loops.c
//
// This program was writtn by Name zID
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop

#include <stdio.h>

#define MAX 4

int main(void) {

    for (int row = 0; row < MAX; row++) {
        for (int col = 0; col < MAX; col++) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");
            }
        }
        printf("\n");
    }

    return 0;
}