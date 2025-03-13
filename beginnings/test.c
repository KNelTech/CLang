#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number
int random_number(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Main function
int main() {
    srand(time(NULL)); // Seed random number generator

    printf("\n🌙 Welcome to the Gotham Theme Showcase! 🌙\n\n");

    for (int i = 1; i <= 5; i++) {
        int num = random_number(1, 100);
        printf("🔹 Random Number %d: %d\n", i, num);
    }

    printf("\n✨ Syntax Highlighting Looks Clean! ✨\n");
    return 0;
}
