#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, vowels = 0;

    printf("Enter a string: ");
    fgets(string, 100, stdin); // read the string from user input

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
