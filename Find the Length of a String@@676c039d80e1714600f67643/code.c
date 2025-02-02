#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0;

    while(str[i]!='\0'){
        i++;
    }

    printf("%d",i);
    return 0;
}