#include <iostream>
#include <cstring>

int main() {
    char name[50]; // Declare a character array to store the name

    // Prompt the user for their name
    std::cout << "Please enter your name: ";
    std::cin >> name; // Read the input from the user

    // Greet the user
    if (std::strcmp(name, "flag") == 0) {
        std::cout << "sctf{}\n";
    }
    std::cout << "Hello, " << name << "! Welcome!" << std::endl;

    return 0;
}
