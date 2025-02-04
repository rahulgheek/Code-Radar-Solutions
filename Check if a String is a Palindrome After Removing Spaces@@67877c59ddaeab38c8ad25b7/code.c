#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);

    int x = 0;
    while(str[x]!='\0'){
        x++;
    }

    int i = 0,y = 1;
    while(str[i]!='\0'){
        else if(str[i] != str[x-i-1]){
            y = 0;
            break;
        }
        i++;
    }
    printf("%d",x);
    return 0;
}