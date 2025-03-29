#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char str[], int shift, char message[]) {
    strcpy(message, str); // Copy input string to output
    int i = 0;
    
    while (message[i] != '\0') {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            // Shift uppercase letters
            message[i] = 'A' + (message[i] - 'A' + shift) % 26;
        } 
        else if (message[i] >= 'a' && message[i] <= 'z') {
            // Shift lowercase letters
            message[i] = 'a' + (message[i] - 'a' + shift) % 26;
        }
        // Spaces and other characters remain unchanged
        i++;
    }
}