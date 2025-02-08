#include <stdio.h>

int main() {
    char str[200],str2[200];
    scanf("%[^\n]%*c",&str);

    int x = 0,count = 0;
    while(str[x]!='\0'){
        if(str[x] == ' '){
            count++;
        }else{
        str2[x-count] = str[x];}
        x++;
    }

    int j = 0;
    while(j<x-count){
        printf("%c",str2[j]);
        j++;
    }
    return 0;
}