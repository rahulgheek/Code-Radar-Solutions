#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);

    int i = 0,x=strlen(str),y = 1;
    while(i<x){
        if(str[i]==' '){
            continue;
        }
        else if(str[i] != str[x-i-1]){
            y = 0;
            break;
        }
        i++;
    }
    printf("%d",y);
    return 0;
}