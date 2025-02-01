#include <stdio.h>

int main() {
    char str[10];
    scanf("%s",&str);

    for(int i = 9;i>=0;i--){
        printf("%s",str[i]);
    }
    return 0;
}