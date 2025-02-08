#include <stdio.h>

int main() {
    char str[100],str2[100];
    scanf("%[^\n]%*c",&str);

    int x = 0;
    while(str[x]!='\0'){
        str2[x] = str[x];
        x++;
    }

    printf("%s",str2);
    return 0;
}