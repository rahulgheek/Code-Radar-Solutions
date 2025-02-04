#include <stdio.h>

int main() {
    char str[100],pre[100];
    scanf("%[^\n]%*c",&str);

    int i = 0,x = 0,large = 0,j = 0;
    while(str[i] != '\0'){
        x = 0;
        if(str[i] == ' '){
            large = x;
            j = i-x;
            x = 0;
        }
        x++;
        i++;
    }

    printf("%d",large);
    return 0;
}