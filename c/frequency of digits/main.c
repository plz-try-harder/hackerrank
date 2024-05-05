#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char input[1000]; // Assuming a maximum input length of 99 characters
    int i = 0;       // Counter for the number of characters read
    int count[10]={0};
    //printf("Enter a string: ");

    // Read characters until a newline or EOF is encountered
    while (i < sizeof(input) - 1) {
        int c = getchar(); // Read a character from stdin

        // Check for newline or EOF
        if (c == '\n' || c == EOF) {
            break;
        }

        input[i] = (char)c; // Store the character in the string
        i++;
    }

    input[i] = '\0'; // Null-terminate the string

    //printf("You entered: %s\n", input);
   // printf("Size of the string: %d\n", i);


    
    for (int j = 0; j < i; j++) {
        if (isdigit(input[j])) {
            int digit = input[j] - '0'; // Convert char to int
            count[digit]++;
        }
    }
    
    for (int i = 0 ; i < 10 ; i++){
        printf("%d ", count[i]);
    }
    
    
    return 0;
}