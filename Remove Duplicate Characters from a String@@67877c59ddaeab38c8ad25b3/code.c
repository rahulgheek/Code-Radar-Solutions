#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);

    for(int i = 0;str[i] != '\0';i++){
        for(int j = i+1;str[j]!='\0';j++){
            printf("%c",str[j]);
        }
    }
    return 0;
}