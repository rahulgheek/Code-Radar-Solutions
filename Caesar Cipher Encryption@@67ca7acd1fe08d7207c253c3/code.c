#include <stdio.h>
#include <string.h>

void caesarCipher(char str[],int shift,char message[]){
    strcpy(message,str);
    int i = 0;
    while(message[i] != '\0'){
        if(message[i] == ' '){
            i++;
            continue;
}
        message[i] += shift;
        i++;
    }
}