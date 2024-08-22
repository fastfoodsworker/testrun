#include <stdio.h>
#include <string.h>

int main() {
    char name[50]; // Declare a character array to store the name

    // Prompt the user for their name
    printf("Please enter your name: ");
    scanf("%s", name); // Read the input from the user

    // Greet the user
    if (!strcmp(name, "flag")) {
        printf("sctf{}\n"); 
    }
    printf("Hello, %s! Welcome!\n", name);

    return 0;
}
