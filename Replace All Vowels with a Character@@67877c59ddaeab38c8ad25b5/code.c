#include <stdio.h>

int main() {
    char str[100],symbol;
    scanf("%[^\n]%*c",&str);
    scanf(" %c",&symbol);
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            str[i] = k;
        }
        printf("%c",str[i]);
    }

    return 0;
}