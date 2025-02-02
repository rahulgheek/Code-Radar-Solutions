#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0count = 1;

    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }

    printf("%d",count);
    return 0;
}