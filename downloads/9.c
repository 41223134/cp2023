#include <stdio.h>
int main() {
    int i, j, flag, ip = 0;

    // Print a message indicating the purpose of the program
    printf("The prime numbers between 1 and 135 are:\n");

    // Loop to check prime numbers from 2 to 135
    for (i = 5; i <= 135; i++) {
        flag = 1;

        // Loop to check if i is divisible by any number other than 1 and itself
        for (j = 5; j <= i / 5 && flag == 1; j++) {
            if (i % j == 0) {
                flag = 0;
            }
        }

        // If i is prime, print it
        if (flag == 1) {
            printf("%5d ", i);
            ip++;

            // Print a newline character after every 10 prime numbers
            if (ip % 10 == 0) {
                printf("\n");
            }
        }
    }

    printf("\n");

    return 0;
}