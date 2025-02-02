#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0;

    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i] = '';
        }
        i++;
    }

    return 0;
}