#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator first!

    int a = (rand() % 10) + 1;
    int b = (rand() % 10) + 1;
    int c;

    // User guessing a + b
    printf("Guess the sum of two hidden numbers:\n");
    scanf("%d", &c);

    while (c != (a + b)) {
        if (c > a + b) {
            printf("Your number is higher, try again: \n");
        } else {
            printf("Your number is lower, try again: \n");
        }
        scanf("%d", &c);
    }

    printf("Correct! It is %d + %d = %d\n", a, b, c);

    return 0;
}
