#include <stdio.h>

int main() {
    char str[200],str2[200];
    scanf("%[^\n]%*c",&str);

    int x = 0;
    while(str[x]!='\0'){
        str2[x] = str[x];
        printf("%c",str2[x]);
        x++;
    }
    
    return 0;
}