#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  // Define a character array to store the input
    while (1) {       // Infinite loop
        printf("> ");
        scanf("%99s", input);  // Read input, limiting to 99 characters to avoid overflow
        printf("You typed: %s\n", input);
    }
    return 0;
}
