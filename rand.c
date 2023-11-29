#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator using current time
    srand(time(NULL));

    // Generate and print 5 random numbers
    for (int i = 0; i < 4; i++) {
        int randomNumber = rand();
        printf("%d\n", randomNumber);
    }

    return 0;
}

