#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0;
    while(str[i]!=0){
        printf("%c",str[i]-29);
        i++;
    }
    return 0;
}