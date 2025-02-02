#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0,count;

    if(str[0]==' '){
        count = 0;
    }else{count=1;}

    while(str[i]!='\0'){
        if(str[i]!=' ' && str[i+1]==' '){
            count++;
        }
        i++;
    }

    printf("%d",count);
    return 0;
}