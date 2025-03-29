#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char str[],int shift,char message[]){
    strcpy(message,str);
    int i = 0;
    while(message[i] != '\0'){
        if(message[i] == ' '){
            i++;
            continue;
        }
        for(int j = 0;j<shift;j++){
        message[i]++;
        }
        i++;
    }
}