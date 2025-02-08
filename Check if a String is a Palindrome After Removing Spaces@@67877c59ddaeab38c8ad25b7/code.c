#include <stdio.h>

int main() {
    char str[200],str2[200];
    scanf("%[^\n]%*c",&str);

    int x = 0;
    while(str[x]!='\0'){
        str2[x] = str[x];
        x++;
    }

    printf("%c",str2[1]);
    return 0;
}