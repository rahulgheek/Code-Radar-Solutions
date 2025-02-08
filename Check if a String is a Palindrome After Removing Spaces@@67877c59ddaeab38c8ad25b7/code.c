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

    int j = 0,flag = 1;
    while(j<x-count){
        if(str2[j] != str2[x-count-j-1]){
            flag = 0;
            break;
        }
        j++;
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}