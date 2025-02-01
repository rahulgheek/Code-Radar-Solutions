#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",&str);
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    
    for(int j = i-1;j>=0;j--){
        printf("%c",str[j]);
    }
    return 0;
}