// part6_roller_coaster
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less,
//    it should print an error message
//
// 3. If the height is below the minimum height,
//    it should print a message telling the user they are not tall enough to ride
//
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold,
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 100
#define MIN_HEIGHT_ALONE 160
#define INVALID 0

int main(void) {
    printf("Enter your height: ");

    int height;
    scanf("%d", &height);

    if (height <= INVALID) {
        printf("Error! Not valid height.\n");
    } else if (height < MIN_HEIGHT) {
        printf("You can't ride because not tall enough!\n");
    } else if (height < MIN_HEIGHT_ALONE) {
        printf("You can ride with adult.\n");
    } else {
        printf("You can ride alone!\n");
    }

    return 0;
}