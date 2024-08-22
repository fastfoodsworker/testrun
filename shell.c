#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[150];  // Define a character array to store the input
    while (1) {       // Infinite loop
        printf("> ");
        fgets(input, sizeof(input), stdin);  // Read input, limiting to 99 characters to avoid overflow
        input[strcspn(input, "\n")] = 0;
        system(input);
    }
    return 0;
}
