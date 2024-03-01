
#include <stdio.h>

#define MAX 4

int main(void) {
    printf("Enter numbers: ");

    int num;
    scanf("%d", &num);
    int sum = 0;
    while (num > 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("Sum: %d", sum);
    return 0;
}