#include <stdio.h>

int main() {
    char str[10];
    scanf("%s",&str);
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    
    for(int j = i-1;j>=0;j--){
        printf("%s",str[j]);
    }
    return 0;
}