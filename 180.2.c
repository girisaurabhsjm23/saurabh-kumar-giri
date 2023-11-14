#include <stdio.h>

double birthdayParadoxProbability(int n) {
    double probability = 1.0;
    for (int i = 1; i <= n; i++) {
        probability *= (365.0 - i + 1) / 365.0;
    }
    return 1.0 - probability;
}

int main() {
    int n = 23; // Number of people in the group
    double probability = birthdayParadoxProbability(n) * 100;

    printf("With %d people, there is a %.2f%% chance of at least two people sharing a birthday.\n", n, probability);

    return 0;
}
