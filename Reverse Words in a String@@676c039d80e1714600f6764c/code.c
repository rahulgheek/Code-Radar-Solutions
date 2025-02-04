#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);

    int x = 0;i = 0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            printf("%d ",x);
            x = 0;
        }
        x++;
        i++;
    }
    return 0;
}