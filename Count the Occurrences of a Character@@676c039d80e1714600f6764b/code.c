#include <stdio.h>

int main() {
    char str[100],a;
    scanf("%[^\n]%*c",&str);
    scanf(" %c",&a);
    int i = 0,count=0;

    while(str[i]!='\0'){
        if(str[i]==a){
            count++;
        }
        i++;
    }

    printf("%d", count);
    return 0;
}