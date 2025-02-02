#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    int i = 0;
    while(str[i]!=0){
        if(str[i]>='A' && str[i]<='Z'){
            printf("%c",str[i]);
        }
        else{
        printf("%c",str[i]-32);}
        i++;
    }
    return 0;
}