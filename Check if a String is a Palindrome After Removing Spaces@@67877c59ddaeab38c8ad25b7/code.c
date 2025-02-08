#include <stdio.h>

int main() {
    char str[200],str2[200];
    scanf("%[^\n]%*c",&str);

    int x = 0,count = 0;
    while(str[x]!='\0'){
        if(str[x]==' '){
            count++;
        }
        str2[x] = str[x-count];
        x++;
    }

    int i = 0;
    while(str2[i] != '\0'){
        printf("%c",str2[i]);
    }
    
    return 0;
}