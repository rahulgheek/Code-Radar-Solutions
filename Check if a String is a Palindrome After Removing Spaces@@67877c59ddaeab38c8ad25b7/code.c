#include <stdio.h>

int main() {
    char str[200],str2[200];
    scanf("%[^\n]%*c",&str);

    int x = 0;
    while(str[x]!='\0'){
        str2[x] = str[x];
        x++;
    }
    int j = 0;
    while(str2[j] == '\0'){
        printf("%c",str2[j]);
    }
    return 0;
}