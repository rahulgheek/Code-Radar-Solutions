#include <stdio.h>

int main() {
    char str[10];
    scanf("%s",&str);
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    printf("%d",i);
    return 0;
}