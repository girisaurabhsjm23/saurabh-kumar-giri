#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numTrials = 1000;  // Adjust the number of trials as needed
    int i;
    int die1, die2;
    int sum;
    int outcomes[11] = {0};  // Array to store the count of each possible outcome (2 to 12)

    // Seed the random number generator
    srand((unsigned)time(NULL));

    for (i = 0; i < numTrials; i++) {
        // Generate random numbers between 1 and 6 for each die
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;

        // Calculate the sum of the two dice and update the outcomes array
        sum = die1 + die2;
        outcomes[sum - 2]++;
    }

    printf("Outcome\tCount\tExperimental Probability\n");
    for (i = 2; i <= 12; i++) {
        float probability = (float)outcomes[i - 2] / numTrials;
        printf("%d\t%d\t%.4f\n", i, outcomes[i - 2], probability);
    }

    return 0;
}
